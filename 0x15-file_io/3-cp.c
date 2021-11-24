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
	char buf[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdr = open(av[1], O_RDONLY);
	if (fdr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fdw = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
	while ((rd = read(fdr, buf, BUFSIZ)) > 0)
	{
		wt = write(fdw, buf, rd);
		if (rd != wt || wt == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
	}
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	clr = close(fdr);
	if (clr == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr), exit(100);
	clw = close(fdw);
	if (clw == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw), exit(100);
	return (0);
}
