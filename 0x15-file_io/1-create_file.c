#include "main.h"


/**
 * create_file - Create a new file
 * @filename: Name of file to be manipulated
 * @text_content: file to be copied
 *
 * Return: sizeof file content.
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int cont;
	int file;

	if (!filename)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (cont = 0; text_content[cont]; cont++)
	;
	file = write(i, text_content, cont);
	if (file == -1)
		return (-1);
	close(i);
return (1);
}
