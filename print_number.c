#include "main.h"
/**
 * print_number - Print integer to stdout.
 * @n : Number.
 * Return: Number of printed digits.
 */
int print_number(int n)
{
	int len = 0;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10 + 48);
	return (len);
}
