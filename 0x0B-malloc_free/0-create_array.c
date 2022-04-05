#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars and intialized it with a 
 * specific char
 *
 * @size: size of array
 * @c: character to initialize array
 *
 * Return: if size = 0 , NULL
 * else, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	array = malloc(sizeof(char) * size);

	if (size ==0 || array == NULL)
		return (NULL);

	for(count = 0; count < size; count++)
		array[count] = c;
	return (array);
}
