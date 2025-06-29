#include <stdio.h>
#include <stdlib.h>
#include "../include/evasion.h"

int main() {
    char* message = "Test Message.";
    print_banner(message);

    if (is_debugger_present()) return 1;

    char* encoded = xor_encode(message, 'K');
    char* decoded = xor_decode(encoded, 'K');

    printf("Original: %s\n", message);
    printf("Encoded : %s\n", encoded);
    printf("Decoded : %s\n", decoded);

    system("pause");
    free(encoded);
    free(decoded);

    return 0;
}
