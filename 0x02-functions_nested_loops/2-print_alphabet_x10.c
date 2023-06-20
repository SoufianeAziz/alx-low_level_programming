#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always (0) With success
 */
void print_alphabet_x10(void)
{
	int i;
	int u;

	for (u = 1; u <= 10; u++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
