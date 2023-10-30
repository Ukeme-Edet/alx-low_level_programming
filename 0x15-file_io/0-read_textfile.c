#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	len = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, len);
	close(fd);
	free(buf);
	return (len);
}
