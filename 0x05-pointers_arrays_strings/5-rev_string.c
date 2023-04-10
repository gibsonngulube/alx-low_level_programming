#include "main.h"
/**
  *rev_string - reverses a string
  *
  *@s: pointer as a parameter
  *
  *Return: nothing
  */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
