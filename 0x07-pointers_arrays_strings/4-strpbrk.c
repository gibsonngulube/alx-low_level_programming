#include <stdio.h>
#include "main.h"
/**
  *strpbrk - searches a string for any set of bytes
  *@s: string to be searched
  *@accept: string to search
  *
  *Return: pointer to s (NULL if unseccessful)
  */
char *strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				s = &s[i];
				return (s);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
