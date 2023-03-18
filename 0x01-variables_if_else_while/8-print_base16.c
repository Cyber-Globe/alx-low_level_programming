#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16 in lowercase.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{

	if (i < 10)
	{
		putchar(i + '0');
	}
	else
	{
		putchar(i - 10 + 'a');
	}
	}
	putchar('\n');
	return (0);
}
