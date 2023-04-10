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
	int i = 0;

	while (i <= (n - 1))
	{
		printf("%d", *(a + i));

		if (i <= (n - 2))
		{
			printf(", %s");
		}
		i++;
	}
}
