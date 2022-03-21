#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: string
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	putchar('\n');
}
