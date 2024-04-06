#include "main.h"

/**
 * append_text_to_file - function name
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file.
 * Return: success
 */
int append_text_to_file(const char *filename, char *text_content)
{
int abc, def, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

abc = open(filename, O_WRONLY | O_APPEND);
def = write(abc, text_content, len);

if (abc == -1 || def == -1)
return (-1);

close(abc);

return (1);
}
