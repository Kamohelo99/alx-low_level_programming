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
		if (character == 'e' || character == 'q')
			continue;

		putchar(character);
	}
	putchar('\n');
	return (0);
}
