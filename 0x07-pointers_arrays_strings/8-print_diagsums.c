#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals
 * square matrix of integers.
 * @a:integers of the matrix
 * @size: The matrix size.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	sum1 += *(a + i * size + i);
	sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}

