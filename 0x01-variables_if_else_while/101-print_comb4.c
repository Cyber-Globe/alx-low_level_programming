#include <stdio.h>
/**
 * main - Write a program that prints all possible different combination.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
	if (i != j && j != k && k != i)
	{
	putchar (i + '0');
	putchar (j + '0');
	putchar (k + '0');
	if (i != 7 || j != 8 || k != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}

	return (0);
}


