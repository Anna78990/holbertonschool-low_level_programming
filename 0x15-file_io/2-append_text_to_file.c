#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename : filename to create
 * @text_content: text written in the file
 * Return: if its succeeded 1,otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (i = 0; text_content[i]; i++)
		;
}
else
{
	text_content = "";
	for (i = 0; text_content[i]; i++)
		;
}
fd = open(filename, O_APPEND | O_WRONLY);
write(fd, text_content, i);
return (1);
}
