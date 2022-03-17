#include "main.h"
/**
 * print_diagonal - Print diagonal
 * @x: Number that is going to be splited
 * Return: Return the last digit
 */

void print_diagonal(int n)
{
	int c, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (c = 0; c < n; c++)
	{
		for (l = 0; l < c; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
