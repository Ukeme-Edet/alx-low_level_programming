#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	size_t read_count, write_count;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_count = fread(buffer, sizeof(char), letters, file);
	if (read_count == 0)
		return (0);
	write_count = fwrite(buffer, sizeof(char), read_count, stdout);
	if (write_count == 0)
		return (0);
	fclose(file);
	free(buffer);
	return (write_count);
}
