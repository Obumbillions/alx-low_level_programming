#include "main.h"
/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0 on success. Erro code otherwise
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');

	return (0);
}
