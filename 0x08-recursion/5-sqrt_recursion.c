#include <stdio.h>
#include "main.h"
/**
  *find_sqrt - helper function
  *@n: int number to be calculated
  *@i: another in num
  *Return: square root of n
  */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}

	else if (i * i > n)
	{
		return (-1);
	}

	else
	{
		return (find_sqrt(n, i + 1));
	}
}
/**
  *_sqrt_recursion - returns square root
  *@n: int num to be calculated
  *Return: Returns square root of n
  */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}
