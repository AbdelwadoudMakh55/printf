#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_binary - Print the corresponding binary value of an int.
 * @list : list of args.
 * Return: Number of 0 and 1.
 */
int print_binary(va_list list)
{
	int len = 0, i = 0;
	char buffer[200];
	int n = va_arg(list, int);

	for (i = 0; n / 2 != 0; i++)
	{
		buffer[i] = 48 + n % 2;
		len++;
		n /= 2;
	}
	buffer[i] = 48 + n % 2;
	len++;
	buffer[i + 1] = '\0';
	_print_rev_recursion(buffer);
	return (len);
}
