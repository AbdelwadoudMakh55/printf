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
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
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
					len += _puts(va_arg(list, char *));
					i += 2;
					break;
				case '%':
					len += _putchar(format[i + 1]);
					i += 2;
					break;
				case 'd':
				case 'i':
					len += print_number(va_arg(list, int));
					i += 2;
					break;
				default:
					i += 2;
					continue;
			}
		}
		else
		{
			len += _putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (len);
}
