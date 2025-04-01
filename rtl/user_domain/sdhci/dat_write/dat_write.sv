//

module dat_write ( 
  input logic sd_clk_i,
  input logic rst_ni,

  input logic start_send_i,
  input logic [31:0]  dat_i_par,
);

  logic load_even, load_odd, shift_even, shift_odd;
  logic load, shift;
  logic [7:0] dat_in_0, dat_in_1, dat_in_2, dat_in_3; //input to shift registers
  logic dat_0_even_ser, dat_1_even_ser, dat_2_even_ser, dat_3_even_ser, dat_0_odd_ser, dat_1_odd_ser, dat_2_odd_ser, dat_3_odd_ser; //output of data shift registers
  logic dat_0, dat_1, dat_2, dat_3; //output of data shift registers combined
  logic shift_out_crc, crc_0, crc_1, crc_2, crc_3;
  logic odd_even; //1 for odd, 0 for even
  logic [9:0] count;

  always_comb begin : input_bit_assignment  //shure hope this is right :)
    dat_in_0  = {dat_i_par[4], dat_i_par[0], dat_i_par[12], dat_i_par[8], dat_i_par[20], dat_i_par[16], dat_i_par[28], dat_i_par[24]};
    dat_in_1  = {dat_i_par[5], dat_i_par[1], dat_i_par[13], dat_i_par[9], dat_i_par[21], dat_i_par[17], dat_i_par[29], dat_i_par[25]};
    dat_in_2  = {dat_i_par[6], dat_i_par[2], dat_i_par[14], dat_i_par[10], dat_i_par[22], dat_i_par[18], dat_i_par[30], dat_i_par[26]};
    dat_in_3  = {dat_i_par[7], dat_i_par[3], dat_i_par[15], dat_i_par[11], dat_i_par[23], dat_i_par[19], dat_i_par[31], dat_i_par[27};
  end

  assign  even_odd  = count [5];  //32 value bit
  assign  dat_0     = (odd_even)  ? dat_0_odd_ser : dat_0_even_ser;
  assign  dat_1     = (odd_even)  ? dat_1_odd_ser : dat_1_even_ser;
  assign  dat_2     = (odd_even)  ? dat_2_odd_ser : dat_2_even_ser;
  assign  dat_3     = (odd_even)  ? dat_3_odd_ser : dat_3_even_ser;

  assign load_even  = (~odd_even) & load;
  assign load_odd   = odd_even & load;
  assign shift_even = (~odd_even) & shift;
  assign shift_odd  = odd_even  & shift;
  


  //first shift register bank
  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_0_even (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_even),
    .shift_en_i     (shift_even),
    .dat_par_i      (dat_in_0)
    .dat_ser_o      (dat_0_even_ser)
  );

  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_1_even (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_even),
    .shift_en_i     (shift_even),
    .dat_par_i      (dat_in_1)
    .dat_ser_o      (dat_1_even_ser)
  );

  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_2_even (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_even),
    .shift_en_i     (shift_even),
    .dat_par_i      (dat_in_2)
    .dat_ser_o      (dat_2_even_ser)
  );

  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_3_even (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_even),
    .shift_en_i     (shift_even),
    .dat_par_i      (dat_in_3)
    .dat_ser_o      (dat_3_even_ser)
  );
  
  //second shift register bank
  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_0_odd (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_odd),
    .shift_en_i     (shift_odd),
    .dat_par_i      (dat_in_0)
    .dat_ser_o      (dat_0_odd_ser)
  );
  
  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_1_odd (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_odd),
    .shift_en_i     (shift_odd),
    .dat_par_i      (dat_in_1)
    .dat_ser_o      (dat_1_odd_ser)
  );
  
  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_2_odd (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_odd),
    .shift_en_i     (shift_odd),
    .dat_par_i      (dat_in_2)
    .dat_ser_o      (dat_2_odd_ser)
  );
  
  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_3_odd (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_odd),
    .shift_en_i     (shift_odd),
    .dat_par_i      (dat_in_3)
    .dat_ser_o      (dat_3_odd_ser)
  );

  //crc calculation
  crc16_write i_crc16_write_0 (
    .clk_i              (clk_i),
    .rst_ni             (rst_ni),
    .shift_out_crc16_i  (shift_out_crc),
    .dat_ser_i          (dat_0),
    .crc_ser_o          (crc_0)
  );
  
  crc16_write i_crc16_write_1 (
    .clk_i              (clk_i),
    .rst_ni             (rst_ni),
    .shift_out_crc16_i  (shift_out_crc),
    .dat_ser_i          (dat_1),
    .crc_ser_o          (crc_1)
  );

  crc16_write i_crc16_write_2 (
    .clk_i              (clk_i),
    .rst_ni             (rst_ni),
    .shift_out_crc16_i  (shift_out_crc),
    .dat_ser_i          (dat_2),
    .crc_ser_o          (crc_2)
  );

  crc16_write i_crc16_write_3 (
    .clk_i              (clk_i),
    .rst_ni             (rst_ni),
    .shift_out_crc16_i  (shift_out_crc),
    .dat_ser_i          (dat_3),
    .crc_ser_o          (crc_3)
  );
endmodule