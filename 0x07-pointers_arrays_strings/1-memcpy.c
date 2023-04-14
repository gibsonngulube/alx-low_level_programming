#include <stdio.h>
#include "main.h"
/**
  *_memcpy - copies memory area
  *
  *@dest: destination for a new address
  *@src: address to be copied
  *@n: size of memory to copy
  *
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
