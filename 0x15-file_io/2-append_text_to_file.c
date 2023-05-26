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
	int i;
	int cont;
	int file;

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content)
	{
		for (cont = 0; text_content[cont]; cont++)
		;
		file = write(i, text_content, cont);
		if (file == -1)
			return (-1);
	}
	close(i);
return (1);
}
