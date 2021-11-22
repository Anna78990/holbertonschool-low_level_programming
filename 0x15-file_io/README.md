0-read_textfile.c
The function in this file reads a text file and prints it to the POSIX standard output, by setting the filename as
the argument 'filename', the letter as the argument 'letters'.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);
Return: the actual number of letters it could read and print, or 0 if filename is NULL and if write fails or does 
not write the expected amount of bytes
