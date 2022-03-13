#include <stdio.h>
/**
 * main - program starting point
 *
 * Return: 0
 */

int main(void)
{
	int counter = 0;

	while (counter <= 25)
	{
		if((counter == 4) || (counter == 16)) /*index of e and q*/
			continue;

		putchar(counter + 'a');
		counter ++;
	}
	putchar('\n');

	return (0);
}
