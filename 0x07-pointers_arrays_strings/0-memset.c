#include <stdio.h>
/**
 * _memeset - fills a block of memory with constant byte
 * @s: starting the address
 * @b: the value that remain constant
 * @n: bytes to change in max
 * desc: 
 * Return: a pointer of memory
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
