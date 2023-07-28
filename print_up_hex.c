#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_up_hex - Print the corresponding hexadecimal value of an int in
 * lower case.
 * @list : list of args.
 * Return: Number of characters.
 */
int print_up_hex(va_list list)
{
	int i, j;
	char buffer[200];
	char A_to_F[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	unsigned long int hex10_to15[6] = {10, 11, 12, 13, 14, 15};
	unsigned long int n = va_arg(list, unsigned long int);

	for (i = 0; n / 16 != 0; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (n % 16 == hex10_to15[j])
			{
				buffer[i] = A_to_F[j];
				break;
			}
		}
		if (j == 6)
			buffer[i] = 48 + n % 16;
		n /= 16;
	}
	for (j = 0; j < 6; j++)
	{
		if (n % 16 == hex10_to15[j])
		{
			buffer[i] = A_to_F[j];
			break;
		}
	}
	if (j == 6)
		buffer[i] = 48 + n % 16;
	buffer[i + 1] = '\0';
	return (_print_rev_recursion(buffer));
}
