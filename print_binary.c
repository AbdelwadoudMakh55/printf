#include "main.h"
#include <stdio.h>
/**
 * print_binary - Print the corresponding binary value of an int.
 * @n : Number.
 * Return: Number of 0 and 1.
 */
int print_binary(int n)
{
	int len = 0, i = 0;
	char buffer[100];

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
