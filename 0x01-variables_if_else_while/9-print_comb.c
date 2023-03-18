#include <stdio.h>
/**
 * main - \Write a program that prints all possible combinations.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i; j < 10; j++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		putchar(j + '0');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
