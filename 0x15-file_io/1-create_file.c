#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_file - Create a new file
 * @filename: Name of file to be manipulated
 * @text_content: file to be copied
 *
 * Return: sizeof file content.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int str;
	int WR;

	str = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (filename == NULL)
		return (-1);
	WR = write(fd, text_content, str);

	if (fd == -1 || WR == -1)
		return (-1);
	close(fd);
	return (1);
}
