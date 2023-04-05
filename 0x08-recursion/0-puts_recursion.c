#include "main.h"

/**
 * _puts_recursion - Prints a string, then a new line.
 * @s: The string that you want  to print.
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

