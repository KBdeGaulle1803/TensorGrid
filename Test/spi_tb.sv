module spi_tb (); 
    parameter SPI_MODE = 3; 
    parameter CLKS_PER_HALF = 4; 

    logic rst = 0; 
    logic spi_clk; 
    logic clk = 0; 
    logic spi_pico; 

    logic [7:0] controller_byte_tx = 0;
    logic controller_byte_tx_dv = 0; 
    logic tx_data_ready; 
    logic [7:0] peripheral_byte_rx; 
    logic peripheral_byte_rx_dv; 

    //clk 
    always #2 clk = ~clk;  

    // DUT 
    spi_controller #(
        .SPI_MODE(SPI_MODE),
        .CLKS_PER_HALF(CLKS_PER_HALF)
    )spi_controller (
        .clk(clk),
        .rst(rst),
        .tx_dv_in(controller_byte_tx_dv),
        .tx_data_in(controller_byte_tx),
        .tx_ready(tx_data_ready),
        .rx_dv(peripheral_byte_rx_dv),
        .rx_data_out(peripheral_byte_rx),
        .pico_bit_out(spi_pico),
        .poci_bit_in(spi_pico),
        .spi_clk_out(spi_clk)
    ); 

    task  SendByte(input [7:0] data);
        @(posedge clk);
        controller_byte_tx <= data;
        controller_byte_tx_dv <= 1; 
        @(posedge clk);
        controller_byte_tx_dv <= 0; 
        @(posedge tx_data_ready); 
    endtask // SendByte


    initial begin
        repeat(10) @(posedge clk); 
        rst = 0; 
        repeat(10) @(posedge clk); 
        rst = 1; 

        //Send Byte 
        SendByte(8'hC1);
        $display("Sent 0xC1 Received 0x%h", peripheral_byte_rx);

        SendByte(8'hC4);
        $display("Sent 0xC4 Received 0x%h", peripheral_byte_rx);
        SendByte(8'hA1);
        $display("Sent 0xA1 Received 0x%h", peripheral_byte_rx);

        repeat(10) @(posedge clk); 
        $dumpfile("spi_tb.vcd");
        $dumpvars; 
        $finish; 
    end


endmodule : spi_tb