#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Append to a file
 * @filename: Name of file to be manipulated
 * @text_content: sizeof bytes
 *
 * Return: sizeof file content.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int WR;
	int str;

	str = strlen(text_content);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	WR = write(fd, text_content, str);

	if (fd == -1 || WR == -1)
		return (-1);
	close(fd);

	return (1);
}
