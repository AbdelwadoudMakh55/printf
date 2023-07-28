#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * print_h_number - Print integer to stdout.
 * @n : Number.
 * Return: Number of printed digits.
 */
int print_h_number(short int n)
{
	short int copy_n = n, count = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (n == SHRT_MIN)
	{
		_putchar('-');
		_putchar('3');
		print_h_number(2768);
		return (6);
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
		print_h_number(n / 10);
	_putchar(n % 10 + 48);
	return (count);
}
