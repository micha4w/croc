// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "register_interface/typedef.svh"
`include "obi/typedef.svh"

package user_pkg;

  ////////////////////////////////
  // User Manager Address maps //
  ///////////////////////////////
  
  // None


  /////////////////////////////////////
  // User Subordinate Address maps ////
  /////////////////////////////////////

  localparam int unsigned NumUserDomainSubordinates = 2;

  localparam bit [31:0] UserROMAddrOffset   = croc_pkg::UserBaseAddr; // 32'h2000_0000;
  localparam bit [31:0] UserROMAddrRange    = 32'h1000_0000;

  localparam bit [31:0] UserSDHCIAddrOffset   = croc_pkg::UserBaseAddr + 32'h1000_0000; // 32'h3000_0000;
  localparam bit [31:0] UserSDHCIAddrRange    = 32'h0000_1000;          // every subordinate has at least 4KB

  localparam int unsigned NumDemuxSbrRules  = NumUserDomainSubordinates; // number of address rules in the decoder
  localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1; // additional OBI error, used for signal arrays

  // Enum for bus indices
  typedef enum int {
    UserError = 0,
    UserROM = 1,
    UserSDHCI = 2
  } user_demux_outputs_e;

  // Address rules given to address decoder
  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = '{
    '{ idx: UserROM,   start_addr: UserROMAddrOffset,   end_addr: UserROMAddrOffset + UserROMAddrRange     },
    '{ idx: UserSDHCI, start_addr: UserSDHCIAddrOffset, end_addr: UserSDHCIAddrOffset + UserSDHCIAddrRange }
  };


endpackage
