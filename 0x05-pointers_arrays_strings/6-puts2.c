#include "main.h"
/**
  *puts2 - prints evert other
  *character of a string, starting
  *with the 1st character
  *@s: a pointer parameter
  *Return: nothing
  */
void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		i++;
	}
}
