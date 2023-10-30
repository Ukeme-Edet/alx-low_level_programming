#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to be created
 * @text_content: The string to be written into the file
 * Return: 1 on success, -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *new_file;
	int written_bytes;

	if (filename == NULL)
		return (-1);
	new_file = fopen(filename, "w");
	written_bytes = fwrite(text_content, sizeof(char), strlen(text_content),
						   new_file);
	if (written_bytes == -1)
		return (-1);
	fclose(new_file);
	return (1);
}
