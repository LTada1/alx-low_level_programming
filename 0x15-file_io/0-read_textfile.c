#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints,
 * it to the POSIX standard output.
 * @filename: name of file to rean from
 * @letters: number of letters to read.
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
size_t bytes_written;
size_t bytes_read;
char *BUFF[SIZE];

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

bytes_read = read(fd, BUFF, letters);
if (bytes_read <= 0)
{
close(fd);
return (0);
}

bytes_written = write(STDOUT_FILENO, BUFF, bytes_read);
close(fd);

if (bytes_written != bytes_read)
return (0);

return (bytes_written);
}
