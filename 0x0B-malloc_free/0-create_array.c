#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array and dynamically allocates
  *memory to it
  *@size: determines size of memory needed
  *@c: char holder
  *Return: pointer to an array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
