#include "main.h"
#include <stdarg.h>
/**
 * print_P - Print the adress of a pointer.
 * @list : List of args.
 * Return: Number of chars.
 */
int print_P(va_list list)
{
	void *ptr = va_arg(list, void *);

	if (ptr == NULL)
		return (_puts("(nil)"));
	return (_printf("%x", ptr));
}
