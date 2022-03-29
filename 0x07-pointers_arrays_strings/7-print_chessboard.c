#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 *
 * @a: The chessboard to be printed
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
	
		_putchar('\n');
	}
}
