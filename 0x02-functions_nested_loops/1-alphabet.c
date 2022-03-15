#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * Return : void
 */

void print_alphabet(void)
{
	char a;
	int i;

	a = 'a';
	i = 0;

	while(i <= 25)
	{
		_putchar(a + i);
		i++;
	}
	_putchar('\n');
}
