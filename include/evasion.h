#pragma once
#include <stddef.h>

char* xor_encode(const char* input, char key);
char* xor_decode(const char* input, char key);
char* base64_encode(const unsigned char* input, size_t len);

void print_banner(const char* message);

int is_debugger_present();

void polymorphic_payload();
void dynamic_api_call();
void decrypt_and_execute();
void execute_shellcode();
