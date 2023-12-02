#include "main.h"

/**
* append_text_to_file - Appends text.
* @filename: text string
* @text_content: file appended to.
*
* Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int i;
int j;
int k;

if (!filename)
return (-1);

a = open(filename, O_WRONLY | O_APPEND);
  
if (i == -1)
return (-1);

if (text_content)
{
for (j = 0; text_content[j]; j++)
;
k = write(a, text_content, j);

if (k == -1)
return (-1);
}

close(i);

return (1);
}
