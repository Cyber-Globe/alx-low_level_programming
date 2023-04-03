#include "main.h"

/**
 * _strspn - the length of a prefix substring.
 * @s: string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in swhich declearation
 * consist only of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}

