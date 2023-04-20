#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *_strdup - copies a string and dynamically stores it
  *@str: address to a string
  *Return: pointer to a duplicate string
  */
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = (char *)malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);
}
