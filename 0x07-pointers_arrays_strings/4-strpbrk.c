#include "main.h"
#include <stdio.h>
/**
  *strpbrk - searches a string for any set of bytes
  *@s: string to be searched
  *@accept: string to search
  *
  *Return: pointer to s (NULL if unseccessful)
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				s = &s[i];
				return (s);
			}
		}
	}

	return (NULL);
}
