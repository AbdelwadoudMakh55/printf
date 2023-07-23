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
	int i = 0, len = 0, num = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					len += _putchar(va_arg(list, int));
					break;
				case 's':
					len += _puts(va_arg(list, char *));
					break;
				case '%':
					len += _putchar('%');
					break;
				case 'd':
				case 'i':
					len += print_number(va_arg(list, int));
					break;
				case 'b':
					num = va_arg(list, int);
					if (num > 0)
						len += print_binary(num);
					break;
				default:
					len += _putchar('%');
					if (format[i] != '\0')
						len += _putchar(format[i]);
					i++;
					continue;
			}
			i++;
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
