#include "main.h"

/**
* append_text_to_file - Appends text.
* @file_name: text string
* @text_content: file appended to.
*
* Return: 1 on success and -1 on failure.
*/

int append_text_to_file(const char *file_name, char *text_content)
{
int fd;
int byte_count;
int write_result;

if (!file_name)
return (-1);

fd = open(file_name, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);
  
if (text_content)
{
for (byte_count = 0; text_content[byte_count]; byte_count++);

write_result = write(fd, text_content, byte_count);

if (write_result == -1)
{
return (-1);
}
}

close(fd);

return (1);
}
