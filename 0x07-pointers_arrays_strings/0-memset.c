#include <stdio.h>
/**
 * _memeset - fill a block of memory
 * @s: starting the address
 * @b: the value
 * @n: bytes to change
 *
 * Return: change arryes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
