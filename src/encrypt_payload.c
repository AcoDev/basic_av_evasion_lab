#include <stdlib.h>
#include <string.h>
#include "../include/evasion.h"
static char key=0x13;
static unsigned char enc[]="\x3d\x3b\x20\x7a";
void decrypt_and_execute() {
    size_t n=sizeof(enc)-1;
    char* buf=malloc(n+1);
    for(size_t i=0;i<n;i++) buf[i]=enc[i]^key;
    buf[n]=0;
    void print_banner(const char* message);
    free(buf);
}
