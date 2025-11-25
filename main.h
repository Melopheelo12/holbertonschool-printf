#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

/*functions for characters*/
int print_char(va_list args);
int print_string(va_list args);
int handle_specifier(char c, va_list args);
int print_percent(va_list args);

/*function for numbers (Ilan)*/
int print_int(va_list args);

/*utils (Ilan)*/
int _putchar(char c);
int print_number(int n);

/* Structure specifier */
typedef struct specifier
{
    char spec;
    int (*f)(va_list);
} specifier_t;


#endif