#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @dest: The pointer to the destination memory area.
 * @src: The pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area.
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
