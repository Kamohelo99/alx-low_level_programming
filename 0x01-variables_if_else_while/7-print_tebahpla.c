#include <stdio.h>
/**
 * main -program starting point
 *
 * Return: 0
 */

int main(void)
{
	int counter = 25;

	while (counter >= 'a')
	{
		putchar(counter + 'a');
		counter--;
	}
	putchar('\n');

	return (0);
}
