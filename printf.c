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
	int i = 0, len = 0, num;
	char *string;

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
					num = va_arg(list, int);
					len += _putchar(num);
					break;
				case 's':
					string = va_arg(list, char *);
					len += _puts(string);
					break;
				case '%':
					len += _putchar('%');
					break;
				case 'd':
				case 'i':
					num = va_arg(list, int); 
					len += print_number(num);
					break;
				case 'b':
					num = va_arg(list, int);
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
