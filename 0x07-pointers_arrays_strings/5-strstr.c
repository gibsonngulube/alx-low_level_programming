#include <stdio.h>
#include "main.h"
/**
  *_strstr - locates a substring
  *@haystack: string to be searched
  *@needle: substring to look for
  *
  *Return: pointer to the beginning
  *of the substring (or NULL if unseccessful)
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;

	while (*(haystack + len1) != '\0')
	{
		len1++;
	}

	while (*(needle + len2) != '\0')
	{
		len2++;
	}

	for (i = 0; i != len1; i++)
	{
		for (j = 0; j != len2; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				break;
			}
		}

		if (j == len2)
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
