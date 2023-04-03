#include <unistd.h>

/**
 *  _putchar - writes the character c
 *  @c: print the character c
 *
 *  Return: 1 on success
 *  on error, -1 is returned
 *  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
