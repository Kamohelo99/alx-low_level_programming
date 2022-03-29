#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s:THe search string
 * @accept: Prefix to be measured
 *
 * Return: num of bytes in @s consisting of bytes
 *        from accepted
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);

}
