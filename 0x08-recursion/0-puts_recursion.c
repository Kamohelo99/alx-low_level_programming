#include "main.h"

/**
 * puts_recursion - A function that prints a string, followed by a new line.
 *
 * @s: String to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
