#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'a; ch <= 'f'f; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
