#include "main.h"
/**
  *puts_half - prints the 2nd 1/2 of a string
  *@str: points to a string parameter
  *
  *Return: nothing
  */
void puts_half(char *str)
{
	int len = 0;

	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = (len + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
