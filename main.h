#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
void print_integer(va_list args);
void print_percent(va_list args);
int main(void);
void print_decimal(va_list args);
void print_number(int value);

#endif
