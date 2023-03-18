#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
