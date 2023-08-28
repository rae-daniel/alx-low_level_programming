#include "main.h"

/**
 * _strchr - Entry point
 * @s: The input
 * @c: The input
 * Return: Always 0 (Successful)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
