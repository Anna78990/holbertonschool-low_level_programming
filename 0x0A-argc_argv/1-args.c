#include <stdio.h>

/**
 * main - print the number of arguments passed into it.
 * @argc: argc
 * @argv: argv
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
