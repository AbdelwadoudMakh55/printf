#include "main.h"
#include <stdarg.h>
/**
 * print_s - Print a char.
 * @list : List of args.
 * Return: Length of printed string.
 */
int print_s(va_list list)
{
	char *s = va_arg(list, char *);

	return (_puts(s));
}
