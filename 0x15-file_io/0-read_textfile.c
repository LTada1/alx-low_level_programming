#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
	BUFF = malloc(sizeof(char)*letters);
	RD = read(fd,BUFF,letters);
	WR = write(STDOUT_FILENO,BUFF, RD);

	free(BUFF);
	close(fd);

	return (WR);
}
