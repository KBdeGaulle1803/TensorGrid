module spi_controller_cs #(
    parameter SPI_MODE = 0,
    parameter CLKS_PER_HALF = 2,
    parameter MAX_BYTES_PER_CS = 2,
    parameter CS_INACTIVE_CLKS = 1,
    parameter PERIPHERAL_COUNT = 8
)(
    //Control Signals 
    input logic clk,
    input logic rst,
    input logic [$clog2(PERIPHERAL_COUNT)-1:0] active_chip, 
    

    // TX Signals 
    input logic tx_dv_in,
    input logic [7:0] tx_data_in,
    output logic tx_ready_out,
    input logic [$clog2(MAX_BYTES_PER_CS+1)-1:0] tx_count_in,

    // RX Signals  
    output logic rx_dv,
    output logic [7:0] rx_data_out, 

    // SPI Signals 
    input logic poci_bit_in,
    output logic pico_bit_out,
    output logic spi_clk_out,
    output logic [PERIPHERAL_COUNT-1:0] spi_chip_select

);

localparam IDLE        = 2'b00;
localparam TRANSFER    = 2'b01;
localparam CS_INACTIVE = 2'b10;

logic [1:0] state; 
reg [$clog2(MAX_BYTES_PER_CS+1)-1:0] TX_Count;
logic tx_ready; 
reg [$clog2(CS_INACTIVE_CLKS)-1:0] r_CS_Inactive_Count;
wire w_Master_Ready;

spi_controller #(
    .SPI_MODE(SPI_MODE),
    .CLKS_PER_HALF(CLKS_PER_HALF)
) controller (.*);

 // Control CS line using State Machine
  always @(posedge clk or negedge rst)
  begin
    if (~rst)
    begin
      state <= IDLE;
      spi_chip_select <= {(PERIPHERAL_COUNT){1'b1}}; 
      TX_Count <= 0;
      r_CS_Inactive_Count <= CS_INACTIVE_CLKS;
    end
    else
    begin

      case (state)      
      IDLE:
        begin
          if (spi_chip_select[active_chip] & tx_dv_in) // Start of transmission
          begin
            TX_Count <= tx_count_in - 1'b1; // Register TX Count
            spi_chip_select[active_chip]     <= 1'b0;       // Drive CS low
            state   <= TRANSFER;   // Transfer bytes
          end
        end

      TRANSFER:
        begin
          // Wait until SPI is done transferring do next thing
          if (tx_ready)
          begin
            if (TX_Count > 0)
            begin
              if (tx_dv_in)
              begin
                TX_Count <= TX_Count - 1'b1;
              end
            end
            else
            begin
              spi_chip_select[active_chip] <= 1'b1; 
              r_CS_Inactive_Count <= CS_INACTIVE_CLKS;
              state             <= CS_INACTIVE;
            end 
          end 
        end 

      CS_INACTIVE:
        begin
          if (r_CS_Inactive_Count > 0)
          begin
            r_CS_Inactive_Count <= r_CS_Inactive_Count - 1'b1;
          end
          else
          begin
            state <= IDLE;
          end
        end

      default:
        begin
          spi_chip_select[active_chip] <= 1'b1;
          state <= IDLE;
        end
      endcase 
    end
  end 


//   // Keep track of RX_Count
//   always @(posedge i_Clk)
//   begin
//     begin
//       if (spi_chip_select[active_chip])
//       begin
//         o_RX_Count <= 0;
//       end
//       else if (rx_dv)
//       begin
//         o_RX_Count <= o_RX_Count + 1'b1;
//       end
//     end
//   end


  assign tx_ready_out  = ((state == IDLE) | (state == TRANSFER && tx_ready == 1'b1 && TX_Count > 0)) & ~tx_dv_in;



endmodule : spi_controller_cs