#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argc
 * @argv: argv
 * Return: (0)(1)
 */

int main(int argc, char *argv[])
{
	int k;
	int i;
	int ad;
	(void) argc;

	k = 1;
	i = 0;
	ad = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (; argv[k]; k++)
	{
		for (; argv[k][i]; i++)
		{
			if ((isdigit(argv[k][i])) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		ad += atoi(argv[k]);
	}
	printf("%d\n", ad);
	return (0);
}
