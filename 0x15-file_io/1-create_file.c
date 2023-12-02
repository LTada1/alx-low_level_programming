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
int i;
int j;
int k;

if (!filename)
return (-1);

a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (i == -1)
return (-1);

if (!text_content)
text_content = "";

for (i = 0; text_content[i]; i++)
;

j = write(a, text_content, i);

if (j == -1)
return (-1);

close(i);

return (1);
}
