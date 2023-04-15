#include <stdio.h>
#include "main.h"
/**
  *_strspn - gets the length of a prefix substring
  *@s: string to be searched
  *@accept: substring to search
  *
  *Return: bytes of accept find in s
  */
unsigned int _strspn(char *s, char *accept);
{
	int len = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (len);
}
