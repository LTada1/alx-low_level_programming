#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - open,read and write file content
 * @filename: Name of file to be manipulated
 * @letters: sizeof bytes
 *
 * Return: sizeof file content.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *BUFF;
	size_t  WR;
	int fd;
	size_t RD;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	BUFF = malloc(sizeof(char) * letters);
	RD = read(fd, BUFF, letters);
	WR = write(STDOUT_FILENO, BUFF, RD);

	free(BUFF);
	close(fd);

	return (WR);
}
