#include "main.h"
#include <stdio.h>

/**
* error_file - Check file opening.
* @file_from: file to check.
* @file_to: check destination.
* @argv: character array.
* Return: void
*/


void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
* main - check student code
* @argc: number of arguments
* @argv: array of character
* Return: 0 on success
*/


int main(int argc, char *argv[])
{
int file_from, stop_error, file_to;
ssize_t i, j;
char BUFF[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);

i = 1024;
while (tally == 1024)
{
i = read(file_from, BUFF, 1024);
if (i == -1)
error_file(-1, 0, argv);
j = write(file_to, BUFF, i);
if (j == -1)
error_file(0, -1, argv);
}

stop_error = close(file_from);
if (stop_error == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

stop_error = close(file_to);
if (stop_error == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
