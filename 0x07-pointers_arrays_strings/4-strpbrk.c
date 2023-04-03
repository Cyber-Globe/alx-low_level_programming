#include "main.h"

/**
 * _strpbrk - Searches for a string of any set of bytes.
 * @s: The string to be looked into.
 * @accept: The set of bytes to be searched for.
 *
 * Return: if matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}

