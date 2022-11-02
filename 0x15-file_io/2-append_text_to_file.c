#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add to the end of the file
 *
 * Return: if the function fails or filename is NULL - -1
 * if the file does not exist the user lacks write permissions - -1
 * otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	fd_write = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (fd_write == -1)
		return (-1);
	return (1);
}
