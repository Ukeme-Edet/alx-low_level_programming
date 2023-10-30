#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t read_n, write_n;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_n = fread(buffer, sizeof(char), letters, file);
	if (read_n == -1)
		return (0);
	write_n = fwrite(buffer, sizeof(char), read_n, stdout);
	if (write_n == -1)
		return (0);
	free(buffer);
	fclose(file);

	return (write_n);
}
