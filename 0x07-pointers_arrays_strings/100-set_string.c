#include <stdio.h>
#include "main.h"
/**
  *set_string - sets value of a pointer to a char
  *@s: double pointer
  *@to: pointer
  *
  *Return: nothing
  */
void set_string(char **s, char *to)
{
	char *p = *s;

	while (*to)
	{
		*p++ = *to++;
	}

	*p = '\0';
}
