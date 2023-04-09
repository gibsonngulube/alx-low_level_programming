#include "main.h"
/**
  *swap_int - swaps the values of 2 integers
  *
  *@a: pointer to first variable
  *@b: pointer to 2nd variable
  *
  *return: Nothing (void function)
  */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
