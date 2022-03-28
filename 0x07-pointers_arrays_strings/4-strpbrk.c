#include "main.h"

/**
 * strpbrk - locates the occurence in the string @s
 * of any bytes in the string accept
 *
 * @s: String to be searched
 * @accept: set of bytes to be searched for 
 *
 * Return: If a set is matched - a pointer to the byte in s
 * 	   else - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return (NULL);
}
