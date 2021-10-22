#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int k;
	int i;
	int ad;
	(void) argc;

	k = 0;
	i = 0;
	ad = 0;
	for (; argv[k]; k++)
	{
		for (; argv[k][i]; i++)
			{
				if ((isdigit(argv[k][i])) == 0)
				{
					printf("Error\n");
					return 1;
				}
			}
		if (k == 1 && argv[k][i] == '\0')
			{
				printf("0\n");
				return 0;
			}
		ad += atoi(argv[k]);
	}
	printf("%d",ad);
	return 0;
}
