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

int create_file(const char *filename, char *text_content)
{
int fd, rd;
char *buf;
size_t wt;

buf = (char *)malloc(letters);

if (filename == NULL)
	return (-1);
fd = open(file, O_RDWD|O_CREAT|O_TRUNC, 0666);
if (fd < 0)
	return (0);
rd = read(fd, buf, letters);
wt = write(STDOUT_FILENO, buf, letters);
if (wt < letters)
	return (0);
close(fd);
return (rd);
}
