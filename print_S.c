#include "main.h"
#include <stdarg.h>
/**
 * print_S - Print a string with special treatment of non-printable chars.
 * @list : List of args.
 * Return: Number of chars.
 */
int print_S(va_list list)
{
	int len = 0, i;
	char *s;

	s = va_arg(list, char*);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 32 && s[i] < 127)
			len += _putchar(s[i]);
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			len += _puts("\\x");
			if (s[i] <= 15)
			{
				len += _putchar('0');
				len += _printf("%X", s[i]);
			}
			else
				len += _printf("%X", s[i]);
		}
	}
	return (len);
}
