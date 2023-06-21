#include "main.h"
/**
 * islower.c - shows 1 if input is lowercase. Other case shows 0
 *
 * Return: 1 for lowercase character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 9 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

