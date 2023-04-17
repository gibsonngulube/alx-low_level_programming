#include <stdio.h>
#include "main.h"
/**
  *_pow_recursion - calculates x raised to power y
  *@x: base number
  *@y: power
  *Return: the value of x^y
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else if (y % 2 == 0)
	{
		return (_pow_recursion(x * x, y / 2));
	}

	else
	{
		return (x * _pow_recursion(x * x, (y - 1) / 2));
	}
}
