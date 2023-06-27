#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: pointer to string
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s)
	{
		lent++;
		s++;
	}

	return (lent);
}
