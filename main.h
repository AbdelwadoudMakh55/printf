#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct function - Structure of specifiers and functions.
 *
 * @c : Specifier.
 * @f : function.
 */
typedef struct function
{
	char c;
	int (*f)(va_list);
} function_t;

int _putchar(char c);
int _puts(char *);
int print_c(va_list list);
int print_s(va_list list);
int _strlen(const char *s);
int print_number(int n);
int print_n(va_list list);
int _print_rev_recursion(char *s);
int print_r(va_list list);
int print_binary(va_list list);
int rot13(va_list list);
int print_u_number(unsigned int n);
int print_u(va_list list);
int print_octal(va_list list);
int print_low_hex(va_list list);
int print_up_hex(va_list list);
int print_S(va_list list);
int print_P(va_list list);
int _printf(const char *format, ...);
int (*get_fun(char specifier))(va_list);

#endif
