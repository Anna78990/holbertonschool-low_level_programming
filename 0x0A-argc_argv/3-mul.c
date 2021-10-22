#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers
 * @argc: argc
 * @argv: argv
 * Return: (1)(0)
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argc;
	if (!(argv[1]) || !(argv[2]))
	{
	printf("Error\n");
	return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
