#include "main.h"
#include <stdio.h>

/**
* File_Check - Check file opening
* @filed1: File to write from
* @filed2: File to write to
* @argv: Imput array
* Return: Void
*/
void File_Check(int filed1, int filed2, char *argv[])
{
	if (filed1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (filed2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - a function for checking student codes
* @argc: total arguments.
* @argv: array.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int file1, stop_error, file2;
	ssize_t cont, file;
	char pbuffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_1 file2");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	File_Check(file1, file2, argv);
	cont = 1024;
	while (cont == 1024)
	{
		cont = read(file1, pbuffer, 1024);
		if (cont == -1)
			File_Check(-1, 0, argv);
		file = write(file2, pbuffer, cont);
		if (file == -1)
			File_Check(0, -1, argv);
	}
	stop_error = close(file1);
	if (stop_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	stop_error = close(file2);
	if (stop_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
return (0);
}
