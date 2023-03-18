#include <stdio.h>

/**
 * main - whrite a program that points the alphabets in lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{

	if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
	}
	putchar('\n');

	return (0);
}
