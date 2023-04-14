#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Assigned memory using malloc.
 * @b: The number of bytes to be allocated on the memory
 *
 * Return: A pointer to the allocated memory that was assigned.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

