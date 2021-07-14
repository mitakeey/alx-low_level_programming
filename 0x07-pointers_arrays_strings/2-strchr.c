#include "holberton.h"

/**
 * *_strchr - fill memory with a constant byte.
 * @s: pointer to put constant c
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
