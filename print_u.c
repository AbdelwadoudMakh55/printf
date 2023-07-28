#include "main.h"
#include <stdarg.h>
/**
 * print_u - Print unsigned int.
 * @list : List of args.
 * Return: Number of digits.
 */
int print_u(va_list list)
{
	unsigned long int n = va_arg(list, unsigned long int);

	return (print_lu_number(n));
}
