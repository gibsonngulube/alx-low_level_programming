#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *str_length - computes string length
  *@s: address to a string
  *Return: length of a string
  */
int str_length(char *s)
{
	int len = 0;

	while (s != NULL && s[len] != '\0')
	{
		len++;
	}

	return (len);
}
/**
  *str_concat - concatenates 2 strings
  *@s1: first string address
  *@s2: second string
  *Return: Concatenated strings
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2 = 0;
	int total_len;
	int i, j = 0;
	char *result;

	len1 = str_length(s1);
	len2 = str_length(s2);
	total_len = len1 + len2;

	result = (char *) malloc(total_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	while (s1 != NULL && s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	while (s2 != NULL && s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}

	result[total_len] = '\0';

	return (result);
}
