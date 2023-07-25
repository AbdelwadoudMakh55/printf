#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * rot13 - Encodes a string using rot13.
 * @list : List of args.
 * Return: Pointer to string.
 */
int rot13(va_list list)
{
	int len = 0;
	int i;
	int j;
	char letrs[52] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E',
	'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm',
	'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T',
	'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
	char rot13[52] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's',
	'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z',
	'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h',
	'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};
	char *s = va_arg(list, char *);

	if (s == NULL)
		len += _puts("(null)");
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == letrs[j])
				{
					len += _putchar(rot13[j]);
					break;
				}
			}
			if (j == 52)
				len += _putchar(s[i]);
		}
	}
	return (len);
}
