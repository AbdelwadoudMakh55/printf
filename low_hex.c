#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * low_hex_fmt - Handles conversion specifier "x"
 * @output: Pointer to a character buffer to store the result
 * @args: the integer to be converted to lowercase hex
 *
 * Return: Pointer to the end of the result in the character buffer.
 */
char *low_hex_fmt(char *output, va_list args)
{
    int num, temp, i, len;
    char rev_hex[100];

    num = va_arg(args, int);

    len = 0;
    while (num)
    {
        temp = num % 16;

        if (temp < 10)
        {
            rev_hex[len] = temp + 48;
            len++;
        }
        else
        {
            rev_hex[len] = temp + 87;
            len++;
        }

        num /= 16;
    }

    if (len == 0)
    {
        rev_hex[len] = '0';
        len++;
    }

    i = 0;
    len--;
    while (i <= len)
    {
        *output = rev_hex[len];
        output++;
        len--;
    }

    return output;
}

int main()
{
    char result[100];
    int value = 305;

    char *end = low_hex_fmt(result, value);
    *end = '\0'; // Null-terminate the result string

    // Output the result to the console
    for (char *c = result; *c != '\0'; c++)
    {
        putchar(*c);
    }

    return 0;
}
