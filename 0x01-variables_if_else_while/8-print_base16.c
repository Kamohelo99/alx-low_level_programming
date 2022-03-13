#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: 0
 */

int main(void)
{
	int counter = 0;

	while (counter <= 9)
	{
		putchar(counter + '0');
		counter++;
	}
	counter = 0;

	while (counter <= '5')
	{
		putchar(counter + 'a');
		counter++;
	}
	putchar('\n');

	return (0);
}
