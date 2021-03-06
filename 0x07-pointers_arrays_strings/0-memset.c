#include "main.h"

/**
 * _memset - fill the first n bytes of @ s with the constant byte b
 *
 * @s: pointer to memory area to be filled
 * @b: the character to fill the memory with
 * @n: the number of times to filled
 *
 * Return: a pointer to the filled memory address @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
