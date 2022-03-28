#include "main.h"

/**
 * strchr - Locates a character in a string
 *
 * @s: The string we will be looking for the character from
 * @c: The character we are looking for
 *
 * Return : A pointer to the first occurrence of @c
 * in the string s, or null if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0 ; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
