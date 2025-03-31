module dat_write ( 
  input logic sd_clk_i,
  input logic rst_ni,

  input logic start_send_i,
  input logic [31:0]  dat_i_par,
);

  logic load_even, load_odd, shift_even, shift_odd;
  logic [7:0] dat_0_even, dat_1_even, dat_2_even, dat_3_even, dat_0_odd, dat_1_odd, dat_2_odd, dat_3_odd;
  logic dat_0_even_ser, dat_1_even_ser, dat_2_even_ser, dat_3_even_ser, dat_0_odd_ser, dat_1_odd_ser, dat_2_odd_ser, dat_3_odd_ser;

  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_0_even (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_even),
    .shift_en_i     (shift_even),
    .dat_par_i      (dat_0_even)
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
    .dat_par_i      (dat_1_even)
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
    .dat_par_i      (dat_2_even)
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
    .dat_par_i      (dat_3_even)
    .dat_ser_o      (dat_3_even_ser)
  );
  
  par_ser_shift_reg #(
    .NumBits    (8),  //32 bits of data at a time, 8 bits per channel
    .ShiftInVal (0)
  ) i_shift_reg_0_odd (
    .clk_i          (sd_clk_i),
    .rst_ni         (rst_ni),
    .par_write_en_i (load_odd),
    .shift_en_i     (shift_odd),
    .dat_par_i      (dat_0_odd)
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
    .dat_par_i      (dat_1_odd)
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
    .dat_par_i      (dat_2_odd)
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
    .dat_par_i      (dat_3_odd)
    .dat_ser_o      (dat_3_odd_ser)
  );
  
endmodule