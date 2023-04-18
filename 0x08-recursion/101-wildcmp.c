#include <stdio.h>
#include "main.h"
/**
  *wildcmp - compares two strings
  *@s1: string 1
  *@s2: string 2
  *Return: 1 (or zero if unseccessful)
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	else if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || (*s2 != '\0' && wildcmp(s1 + 1, s2)))
		{
			return (1);
		}
	}

	else if (*s1 != '\0' && (*s1 == *s2 || *s2 == '?'))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);

}
