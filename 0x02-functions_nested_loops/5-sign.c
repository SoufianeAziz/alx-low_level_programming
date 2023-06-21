#include "main.h"
/**
 * print_sign - Determines if the input number
 * is greater, equaal or less than 0
 *
 * @c: The input number as an integer
 *
 * Return: 1 is greter yhan zero, 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
