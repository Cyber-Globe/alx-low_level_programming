#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of a ramdoly generated number
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand();

	int last_digit = n % 10;

	printf("Last digit of %d is %d\n", n, last_digit);

	return (0);
}
