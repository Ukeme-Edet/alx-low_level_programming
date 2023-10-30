#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to be created
 * @text_content: The string to be written into the file
 * Return: 1 on success, -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
