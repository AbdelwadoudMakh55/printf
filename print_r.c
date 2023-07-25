#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_r - Print reversed string.
 * @list : List of args.
 * Return: Number of digits.
 */
int print_r(va_list list)
{
	char *s = va_arg(list, char *);

		return (_print_rev_recursion(s));
}
