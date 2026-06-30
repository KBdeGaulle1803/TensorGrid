`timescale 1ns / 1ps

module uart_test_full;
parameter baudRate = 115200;
parameter clkFreq = 180633650; // 10 times the baud frequency to ensure proper timing
bit clr = 1;                           // global reset input
bit clk = 1;                            // global clock input
bit serIn = 1;                          // serial data input
bit serOut;                         // serial data output
bit [7:0] txData;                   // data byte to transmit
bit newTxData = 1;                      // asserted to indicate new data byte for transmission
bit txBusy;                         // transmitter busy flag
bit [7:0] rxData;                   // data byte received
bit newRxData;                      // asserted to indicate new received data byte
integer baudFreq = 16 * baudRate / gcd(clkFreq, 16 * baudRate);                // baud frequency inputx = ser.read(bytesWaiting)--baudFreq = 16 * baudRate / gcd(clkFreq, 16 * baudRate)--in this baudrate is 9600  gcd_value(25600)
integer baudLimit = clkFreq / gcd(clkFreq, 16 * baudRate);               //baudLimit = clkFreq / gcd(clkFreq, 16 * baudRate) - baudFreq
bit baudClk;                         // baud clock output
// bit clk_100m = 0;

uartTopBaseExt dut(
    .clr      (clr),
    .clk      (clk),
    .serIn    (serIn),
    .serOut   (serOut),
    .txData   (txData),
    .newTxData(newTxData),
    .txBusy   (txBusy),
    .rxData   (rxData),
    .newRxData(newRxData),
    .baudFreq (baudFreq),
    .baudLimit(baudLimit),
    .baudClk  (baudClk)
);

// baud_base_clk main_clk(
//     .clk_out1(clk),
//     .clk_in1(clk_100m)
// );

always #(1E9/(2*clkFreq)) clk <= ~clk;

integer i, j;
bit [7:0] send, send_r;
realtime period = 1E9/baudRate;
logic [0:9] sending_data;

initial #2500 clr = 0;

initial begin
    for(j = 0; j < 10000; j = j + 1) begin
        send = $random;
        send_r = {<<{send}};
        sending_data = {1'b0, send_r, 1'b1};
        foreach (sending_data[i]) begin
            serIn = sending_data[i];
            repeat(16) @(posedge baudClk) ;
        end
        repeat(j%6) @(posedge baudClk) ;
    end
     @(posedge baudClk) ;
end

initial begin
    for(i = 0; i < 10000; i = i + 1) begin
        txData = $random;
        #(period) ;
        newTxData = 0;
        repeat(10) #(period) ;
        newTxData = 1;
    end
    if (i == 10000) #(period) $finish;
end

logic rx_match;

always @(posedge clk) begin
    if (newRxData) begin
        rx_match <= (rxData == send);
    end
end

endmodule

function integer gcd(input integer a, b);
    integer g, l, m;
    g = b;
    l = a;
    if(a > b) begin
        g = a;
        l = b;
    end
    do begin
        m = g % l;
        g = l;
        l = m;
    end while(m != 0);
    return g;

endfunction