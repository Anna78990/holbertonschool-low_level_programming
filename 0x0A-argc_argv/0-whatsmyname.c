#include <stdio.h>

/**
 * main - print the name of programme
 * @argc: argc
 * @argv: argv
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	if (argc == 1)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
