#include "main.h"
#include <stdlib.h>

/**
 * num_of_words - function to calculate number of words
 * @s: string being passed to check for words
 *
 * Return: number of words
 */
int num_of_words(char *s)
{
	int size = 0;
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != ' ')
		{
			size++;
		}
	}
	size++;

	return (size);
}


/**
 * strtow - splits a string into words
 *
 * @str: string
 *
 * Return: Null if fail, else return pointer to new string
 */

char **strtow(char *str)
{
	int x, y = 0;
	char *split;

	if (str == NULL || *str == 0)
		return (0);

	split = malloc(num_of_words(str) * sizeof(char));
	if (split == NULL)
		return (0);


	for (x = 0; x < num_of_words(str); x++)
	{
		if (str[x] != ' ')
		{
		split[y] = str[x];
		y++;
		}
		else
		{
			split[y] = '\n';
			if (str[x + 1] != ' ')
			y++;
		}
	}
	split[num_of_words(str)] = '\0';
	return (0);
}
