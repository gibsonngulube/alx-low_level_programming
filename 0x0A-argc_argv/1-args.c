#include <stdio.h>
#include "main.h"
/**
  *main - Entry point
  *@argc: counter
  *@argv: string array of arguments
  *Return: Always 0
  */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
