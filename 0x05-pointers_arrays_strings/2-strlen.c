#include "main.h"
/**
  *_strlen - returns the length
  *of a string
  *
  *@s: a pointer to a string
  *
  *Return: The length of a string
  *passed as a parameter
  */
int _strlen(char *s)
{
	int lengthOfString = 0;

	while (*s != '\0')
	{
		lengthOfString++;
		s++;
	}

	return (lengthOfString);
}
