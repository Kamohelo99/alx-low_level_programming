#include <stdio.h>

/**
 * main - program starting point
 *
 * Return: 0
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}

	for (character = 'A'; character <= 'Z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
