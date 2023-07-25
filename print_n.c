#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_n - Print number.
 * @list : List of args.
 * Return: Number of digits.
 */
int print_n(va_list list)
{
	int n = va_arg(list, int);

	return (print_number(n));
}
