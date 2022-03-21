#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half a string
 * @str: string
 */

void puts_half(char *str)
{
	int i, half;

	i = 0;
	while (str[i] != '\0')
		i++;
	half = (i) / 2;
	if (i % 2 != 0)
		half = ((i - 1) / 2) + 1;
	for (; half < i; half++)
		putchar(str[half]);
	putchar('\n');
}
