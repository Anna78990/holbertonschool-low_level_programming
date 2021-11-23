#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - check the code
 * @ac: argc
 * @av: argv
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fdr, fdw, rd, wt, clr, clw;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(av[1], O_RDONLY);
	if (fdr < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	rd = read(fdr, buf, 1024);
	if (rd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdw = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	wt = write(fdw, buf, rd);
	if (fdw < 0 || wt < 0)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	clr = close(fdr);
	if (clr < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	clw = close(fdw);
	if (clw < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (1);
}
