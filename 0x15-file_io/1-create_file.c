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
int character_count;
int write_result;

if (!filename)
return (-1);

file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file_descriptor == -1)
return (-1);

if (!text_content)
text_content = "";

for (character_count = 0; text_content[character_count]; character_count++);

write_result = write(file_descriptor, text_content, character_count);

if (write_result == -1)
return (-1);

close(file_descriptor);
return (1);
}
