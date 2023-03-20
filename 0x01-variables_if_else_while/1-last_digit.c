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
	int last_digit;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}

	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}

	if (last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}

	return (0);
}
