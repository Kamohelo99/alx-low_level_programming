#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: parameter
*
* Return: the last digit of @n
*/
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;

	last_digit = n % 10;

	putchar(last_digit + '0');

	return (last_digit);
}
