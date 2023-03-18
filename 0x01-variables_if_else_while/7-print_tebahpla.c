#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
