#include "main.h"
#include <stdio.h>
/**
 * lower_hex_int - Handles conversion specifier "x"
 * @buffer: Pointer to struct buffer
 * @g: the integer to be converted to lowercase hex
 *
 * Return: Pointer to struct buffer.
 */
int lower_hex_int(buffer, va_list g)
{
	int n, i, j, len;
	char rev_hex[100];

	n = va_arg(g, int);

	len = 0;
	while (n)
	{
		i = 0;

		i = n % 16;

		if (i < 10)
		{
			rev_hex[len] = i + 48;
			len++;
		}
		else
		{
			rev_hex[len] = i + 87;
			len++;
		}

		n /= 16;
	}

	j = 0;
	len--;
	while (j <= len)
	{
		*buffer.array = rev_hex[len];

		buffer.array++;
		buffer.size++;
		len--;
	}

	buffer.array--;
	return (buffer);
}
