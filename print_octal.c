#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_octal - Print the corresponding binary value of an int.
 * @list : list of args.
 * Return: Number of 0 and 1.
 */
int print_octal(va_list list)
{
	int i = 0;
	char buffer[200];
	unsigned int n = va_arg(list, int);

	for (i = 0; n / 8 != 0; i++)
	{
		buffer[i] = 48 + n % 8;
		n /= 8;
	}
	buffer[i] = 48 + n % 8;
	buffer[i + 1] = '\0';
	return (_print_rev_recursion(buffer));
}
