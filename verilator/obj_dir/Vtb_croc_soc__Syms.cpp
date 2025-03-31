// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc.h"
#include "Vtb_croc_soc___024root.h"
#include "Vtb_croc_soc_soc_ctrl_reg_pkg.h"
#include "Vtb_croc_soc_sdhci_reg_pkg.h"

// FUNCTIONS
Vtb_croc_soc__Syms::~Vtb_croc_soc__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_croc_soc__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_croc_soc__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_croc_soc__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_croc_soc__Syms::Vtb_croc_soc__Syms(VerilatedContext* contextp, const char* namep, Vtb_croc_soc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__sdhci_reg_pkg{this, Verilated::catName(namep, "sdhci_reg_pkg")}
    , TOP__soc_ctrl_reg_pkg{this, Verilated::catName(namep, "soc_ctrl_reg_pkg")}
{
        // Check resources
        Verilated::stackCheck(6473);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__sdhci_reg_pkg = &TOP__sdhci_reg_pkg;
    TOP.__PVT__soc_ctrl_reg_pkg = &TOP__soc_ctrl_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__sdhci_reg_pkg.__Vconfigure(true);
    TOP__soc_ctrl_reg_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_croc_soc.configure(this, name(), "tb_croc_soc", "tb_croc_soc", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_init.configure(this, name(), "tb_croc_soc.jtag_init", "jtag_init", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_load_hex.configure(this, name(), "tb_croc_soc.jtag_load_hex", "jtag_load_hex", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_write__unnamedblk1.configure(this, name(), "tb_croc_soc.jtag_write.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_write__unnamedblk2.configure(this, name(), "tb_croc_soc.jtag_write.unnamedblk2", "unnamedblk2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_write_reg32__unnamedblk3.configure(this, name(), "tb_croc_soc.jtag_write_reg32.unnamedblk3", "unnamedblk3", -12, VerilatedScope::SCOPE_OTHER);
}
