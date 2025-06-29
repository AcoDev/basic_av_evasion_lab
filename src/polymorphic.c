#include "../include/evasion.h"
#if defined(_MSC_VER)
#pragma optimize("", off)
#endif
void junk() { __asm__("nop"); }
void polymorphic_payload() {
    junk(); junk();
    print_banner("Polymorphic Payload");
    junk();
}
