#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename : filename to create
 * @text_content: text written in the file
 * Return: if its succeeded 1,otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
int fd, i, z, wt;
char *buf;

if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (i = 0; text_content[i]; i++)
		;
	buf  = (char *)malloc(i);
	for (z = 0; z <= i; z++)
		buf[z] = text_content[z];
}
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd < 0)
	return (-1);
wt = write(fd, buf, i);
if (wt < 0)
	return (-1);
close(fd);
return (1);
}
