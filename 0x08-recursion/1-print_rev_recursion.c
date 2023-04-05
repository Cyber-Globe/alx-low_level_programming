#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	static int len = 1;

	if (*s)
	{
	len++;
	_print_rev_recursion(s + 1);
	}

	if (len > 0)
	{
	_putchar(s[len - 1]);
	len--;
	}
}

