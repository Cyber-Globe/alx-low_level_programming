#include "main.h"
/**
 * @dest: _memcpy - copies memory area
 * @src: location
 * @n: length of src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = (char *)dest;
	const char *s = (const char *)src;

	while (n--)
	{
	*d++ = *s++;
	}

	return (dest);
}
