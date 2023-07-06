#include "main.h"
/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: The lenght of the string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}

	return (lenght);
}
