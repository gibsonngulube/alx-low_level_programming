#include <stdio.h>
#include "main.h"
/**
  *is_prime_helper - helper function
  *@n: original number
  *@i: for calculating the prime number
  *Return: 0 or 1
  */
int is_prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}

	else if (i * i > n)
	{
		return (1);
	}

	else if (n % i == 0)
	{
		return (0);
	}

	else
	{
		return (is_prime_helper(n, i + 2));
	}
}

/**
  *is_prime_number - checks if a number is a prime
  *@n: int to be checked
  *Return: 1 if prime, 0 if not.
  */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	else if (n % 2 == 0 || n < 2)
	{
		return (0);
	}

	else
	{
		return (is_prime_helper(n, 3));
	}
}
