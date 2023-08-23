#include "main.h"

/**
 * _strcmp - compare the string values
 * @s1: input the value
 * @s2: input the value
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
