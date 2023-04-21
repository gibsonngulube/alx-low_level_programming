#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *calculate_length - cakculates length of arguments
  *@ac: counter
  *@av: arguments address
  *Return: argument length
  */
int calculate_length(int ac, char **av)
{
	int i;
	int length;
	char *arg;

	length = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		if (arg == NULL)
		{
			return (-1);
		}
		while (*arg)
		{
			length++;
			arg++;
		}
		length++;
	}
	return (length);
}
/**
  *copy_arguments - copies arguments
  *@ac: argument counter
  *@av: argument address
  *@str: final string
  *@length: argument length
  */
void copy_arguments(int ac, char **av, char *str, int length)
{
	int pos;
	char *arg;
	int i;

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			str[pos] = *arg;
			pos++;
			arg++;
		}
		str[pos] = '\n';
		pos++;
	}
	str[length - 1] = '\0';

}
/**
  *argstostr - concatenates arguments
  *@ac: argument counter
  *@av: arguments addresss
  *Return: a concatenated string of arguments
  */
char *argstostr(int ac, char **av)
{
	int length;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	length = calculate_length(ac, av);
	if (length == -1)
	{
		return (NULL);
	}

	str = malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	copy_arguments(ac, av, str, length);

	return (str);
}

