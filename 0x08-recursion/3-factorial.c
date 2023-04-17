#include <stdio.h>
#include "main.h"
/**
  *factorial - calculates factorial
  *@n: number to be calculated
  *Return: n factorial (n!)
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
