#include <stdio.h>
#include "main.h"
/**
 * is_palindrome_helper - helper function
 * @start: counter int
 * @end: counter int
 * Return: 1 or 0
 **/
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}

	else if (*start != *end)
	{
		return (0);
	}

	else
	{
		return (is_palindrome_helper(start + 1, end - 1));
	}
}
/**
  *string_length - computes the string length
  *@s: string address
  *Return: str length
  */
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + string_length(s + 1));
	}
}
/**
  *is_palindrome - checks if a str is a palindrome
  *@s: string address
  *Return: 1 or 0
  */
int is_palindrome(char *s)
{
	int len = string_length(s);

	char *end = s + len - 1;

	return (is_palindrome_helper(s, end));
}
