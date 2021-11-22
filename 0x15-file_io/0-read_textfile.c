#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it.
 * @filename : filename to rewrite
 * @letters : text written in the file
 * Return: the actual number of letters, or 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, rd;
char *buf;

buf = (char *)malloc(letters);

if (filename == NULL)
	return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
	return (0);
rd = read(fd, buf, letters);
write(STDOUT_FILENO, buf, letters);
close(fd);
return (rd);
}
