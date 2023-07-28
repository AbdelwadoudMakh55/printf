#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * print_number - Print integer to stdout.
 * @n : Number.
 * Return: Number of printed digits.
 */
int print_l_number(long int n)
{
	long int copy_n = n, count = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (n == LONG_MIN)
	{
		_putchar('-');
		_putchar('9');
		print_l_number(223372036854775808);
		return (20);
	}
	if (n < 0)
	{
		_putchar(45);
		n = -n;
		count++;
	}
	while (copy_n != 0)
	{
		copy_n = copy_n / 10;
		count++;
	}
	if (n / 10 != 0)
		print_l_number(n / 10);
	_putchar(n % 10 + 48);
	return (count);
}
