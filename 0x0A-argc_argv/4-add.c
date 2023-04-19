#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - Entry point
  *@argc: argument counter
  *@argv: argurment str array
  *Return: Always 0
  */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");

				return (1);
			}
		}
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);

}
