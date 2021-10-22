#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argc
 * @argv: argv
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int k;
	(void) argc;

	k = 0;
	while (argv[k])
		puts(argv[k++]);
	return (0);
}
