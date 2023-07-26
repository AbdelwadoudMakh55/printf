#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * get_fun - Get the right function for the specifier.
 * @specifier : Type specifier (Char).
 * Return: Pointer to function.
 */
int (*get_fun(char specifier))(va_list)
{
	function_t func[] = {{'c', print_c},
				{'s', print_s},
				{'d', print_n},
				{'i', print_n},
				{'b', print_binary},
				{'r', print_r},
				{'R', rot13},
				{'u', print_u},
				{'x', print_low_hex},
				{'X', print_up_hex},
				{'S', print_S},
				{'p', print_P},
				{'o', print_octal}};
	int i;

	i = 0;
	while (i < 13)
	{
		if (specifier == func[i].c)
			return (func[i].f);
		i++;
	}
	return (NULL);
}
