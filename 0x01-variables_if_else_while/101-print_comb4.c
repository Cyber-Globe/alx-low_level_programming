#include <stdio.h>
/**
 * main - Write a program that prints all possible different combination.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
int i;
int j;
int k;

for (i = 0; i <= 9; i++)
{

for (j = 1; j <= 9; j++)
{

for (k = 2; k <= 9; k++)
{

if (i < j && j < k && i != j && j != k && i != k)
{
putchar (i + '0');
putchar (j + '0');
putchar (k + '0');
{

if (i + j + k != 24)

putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar ('\n');

return (0);
}
