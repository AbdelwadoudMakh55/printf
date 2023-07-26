#include "main.h"
#include <stdio.h>
int main(void)
{
	int len;

	len = _printf("%s\n", "Maroc");
	_printf("%R\n", "Maroc");
	_printf("%r\n", "Maroc");
	_printf("%d\n", len);
	_printf("%b", 1489);
	return (0);
}
