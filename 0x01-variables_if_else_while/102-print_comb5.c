#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
	for (j = i; j <= 99; j++)
	{
	if (i != j)
	{
	int i1 = i / 10, i2 = i % 10;
	int j1 = j / 10, j2 = j % 10;

	if (i1 != 0 || i2 != 0)
	{
		putchar (i1 + '0');
		putchar (i2 + '0');
	}
	else
	{
		putchar ('0');
		putchar ('0');
	}
		putchar (' ');
	if (j1 != 0 || j2 != 0)
	{
		putchar (j1 + '0');
		putchar (j2 + '0');
	}
	else
	{
		putchar ('0');
		putchar ('0');
	}
	if (i != 99 || j != 99)
	{
		putchar (',');
		putchar (' ');
	}
	}
	}
	}	return (0);
}
