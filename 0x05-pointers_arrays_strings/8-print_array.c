#include <stdio.h>
#include "main.h"
/**
  *print_array - prints the elements of an array
  *in their order
  *@a: points to the array
  *@n: an int for the size of an array
  *
  *Return: nothing
  **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
}
