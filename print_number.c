#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_number - Print integer to stdout.
 * @n : Number.
 * Return: Number of printed digits.
 */
int print_number(int n)
{
	int copy_n = n, count = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
		return (11);
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
		print_number(n / 10);
	_putchar(n % 10 + 48);
	return (count);
}
