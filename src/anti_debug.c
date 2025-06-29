#include <windows.h>
#include "../include/evasion.h"
int is_debugger_present() {
    return IsDebuggerPresent();
}
