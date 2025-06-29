#include <windows.h>

typedef int (WINAPI *MSGBOX)(HWND, LPCSTR, LPCSTR, UINT);

void dynamic_api_call() {
    HMODULE h = GetModuleHandleA("user32.dll");
    if (h) {
        MSGBOX m = (MSGBOX)(void*)GetProcAddress(h, "MessageBoxA");
        if (m) {
            m(NULL, "Hello", "Title", MB_OK);
        }
    }
}