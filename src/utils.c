#include <windows.h>
#include "../include/evasion.h"

void print_banner(const char* message) {
    MessageBoxA(NULL, message, "AV Evasion Lab", MB_OK | MB_ICONINFORMATION);
}