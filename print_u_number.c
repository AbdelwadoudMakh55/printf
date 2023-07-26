#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_u_number - Print unsignd integer to stdout.
 * @n : Number.
 * Return: Number of printed digits.
 */
int print_u_number(unsigned int n)
{
	int copy_n = n, count = 0;

	while (copy_n != 0)
	{
		copy_n = copy_n / 10;
		count++;
	}
	if (n / 10 != 0)
		print_u_number(n / 10);
	_putchar(n % 10 + 48);
	return (count);
}
