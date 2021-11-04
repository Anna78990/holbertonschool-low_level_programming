#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 * @argc: number of argument
 * @argv: element in argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	else
	{
		if ((*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*'
			|| *argv[2] == '/' || *argv[2] == '%') && strlen(argv[2]) == 1)
		{
			if (*argv[3] == 0 && (*argv[2] == '/' || *argv[2] == '%'))
			{
			printf("Error\n");
			exit(100);
			}
			else
			{
			int at1, at2, res;

			at1 = atoi(argv[1]);
			at2 = atoi(argv[3]);
			res = (get_op_func(argv[2]))(at1, at2);
			printf("%d\n", res);
			}
		}
		else
		{
		printf("Error\n");
		exit(99);
		}
		return (0);
	}
}
