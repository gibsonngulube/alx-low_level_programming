#include <stdio.h>
#include "main.h"
/**
  *_memset - fills memory with a constant byte.
  *
  *@s: takes in an array address
  *@b: the value to be assigned
  *@n: size of the array in bytes
  *
  *Return: pointer to memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
