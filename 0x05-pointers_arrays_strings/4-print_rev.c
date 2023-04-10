#include "main.h"
/**
  *print_rev - prints a string in reverse,
  *followed by a new line
  *@s: points to a string
  *
  *Return: Nothing
  */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	int i;
	len--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
