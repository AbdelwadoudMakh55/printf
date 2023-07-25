#include "main.h"
#include <stdarg.h>
/**
 * print_c - Print a char.
 * @list : List of args.
 * Return: 1 if printed.
 */
int print_c(va_list list)
{
	char c = va_arg(list, int);

	return (_putchar(c));
}
