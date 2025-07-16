`include "common_cells/registers.svh"

module user_rom #(
  parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
  parameter type                         obi_req_t   = logic,
  parameter type                         obi_rsp_t   = logic
) (
  input  logic clk_i,
  input  logic rst_ni,

  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o
);
   obi_req_t req_q, req_d;
  `FF (req_q, req_d, '0);
   assign req_d = obi_req_i;

  logic [31:0] rsp_data;

  always_comb begin
    case(req_q.a.addr[9:2])
        'h0: rsp_data = "Anto";
        'h1: rsp_data = "ns a";
        'h2: rsp_data = "nd M";
        'h3: rsp_data = "icha";
        'h4: rsp_data = "s AS";
        'h5: rsp_data = {"IC!", 8'b0};
        default: rsp_data = 32'h0;
    endcase
  end

  assign obi_rsp_o.gnt     = '1;
  assign obi_rsp_o.rvalid  = req_q.req;
  assign obi_rsp_o.r.rdata = {<<8{rsp_data}};
  assign obi_rsp_o.r.rid   = req_q.a.aid;
  assign obi_rsp_o.r.err   = '0;

  assign obi_rsp_o.r.r_optional = '0;
endmodule
