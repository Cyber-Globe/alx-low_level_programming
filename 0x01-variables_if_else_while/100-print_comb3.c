#include <stdio.h>
/**
 * main - Write a program that prints all possible different combination.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
	if (i / 10 < i % 10)
	{
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');

	if (i < 89)
	{
	putchar(',');
	putchar(' ');
	}
	}
	i++;
	}

	putchar('\n');
	return (0);
}
