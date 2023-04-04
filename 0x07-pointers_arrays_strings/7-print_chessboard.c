#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: using the 2D array that represents the chessboard.
 *
 * Return: always 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 64)
	{
		_putchar (a[i / 8][i % 8]);
		if (i % 8 == 7)
			_putchar('\n');
		i++;
	}
}
