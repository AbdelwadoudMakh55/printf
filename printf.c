#include "stdarg.h"
#include "main.h"
#include <stdio.h>
/**
 * _printf - Print strings and chars.
 * @format : Format specifier.
 * Return: Length of the printed variables.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, len = 0;

	va_start(list, format);
	if (format != NULL)
	{
		while (format[i] != '\0' && i <= _strlen(format) - 1)
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'c':
						len += _putchar(va_arg(list, int));
						i += 2;
						break;
					case 's':
						if (va_arg(list, char *) == NULL)
							_puts("(null)");
						else
							len += _puts(va_arg(list, char *));
						i += 2;
						break;
					case '%':
						len += _putchar(format[i + 1]);
						i += 2;
						break;
					default:
						i++;
						continue;
				}
			}
			else
			{
				len += _putchar(format[i]);
				i++;
			}
		}
	}
	return (len);
}
