#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers
 * @argc: argc
 * @argv: argv
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
