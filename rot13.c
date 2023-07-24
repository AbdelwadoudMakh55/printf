#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using rot13.
 * @s : Pointer to string.
 * Return: Pointer to string.
 */
char *rot13(char *s)
{
	int i;
	int j;
	char letrs[52] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E',
	'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm',
	'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T',
	'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
	char rot13[52] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's',
	'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z',
	'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h',
	'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};

	if (s != NULL)
	{
		for (i = 0; *(s + i) != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (*(s + i) == letrs[j])
				{
					*(s + i) = rot13[j];
					break;
				}
			}
		}
	}
	return (s);
}
