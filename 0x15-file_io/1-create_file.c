#include "main.h"

/**
* create_file - creates a file
* @filename: file to create
* @text_content: a string of character
*
* Return: 1 on success & 0 on failure.
*/

int create_file(const char *filename, char *text_content)
{
int file_descriptor;
int i;
int write_result;

if (!filename)
return (-1);

file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file_descriptor == -1)
return (-1);

if (!text_content)
text_content = "";

for (i = 0; text_content[i]; i++);

write_result = write(file_descriptor, text_content, i);

if (write_result == -1)
return (-1);

close(file_descriptor);
return (1);
}
