#include <stdlib.h>
#include <string.h>

char* xor_encode(const char* input, char key) {
    size_t len = strlen(input);
    char* encoded = malloc(len + 1);
    if (!encoded) return NULL;
    for (size_t i = 0; i < len; i++) {
        encoded[i] = input[i] ^ key;
    }
    encoded[len] = '\0';
    return encoded;
}

char* xor_decode(const char* input, char key) {
    return xor_encode(input, key);
}
