#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * main - A program that copies the content of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, len = 0, len2 = 0;
	char *buf;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]),
			exit(98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]),
			exit(99);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);
	while ((len = read(fd_from, buf, 1024)) > 0)
	{
		len2 = write(fd_to, buf, len);
		if (len2 != len)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]),
				exit(99);
	}
	if (len == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]),
			exit(98);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd_from),
			exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd_to),
			exit(100);
	free(buf);
	return (0);
}
