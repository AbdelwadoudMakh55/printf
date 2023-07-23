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
	if (format == NULL || (format[0] == '%' && format[1] == '\0')
	|| (format == NULL && format[0] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					len += _putchar(va_arg(list, int));
					break;
				case 's':
					len += _puts(va_arg(list, char *));
					break;
				case '%':
					len += _putchar(format[i + 1]);
					break;
				default:
					i++;
					continue;
			}
			i += 2;
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
