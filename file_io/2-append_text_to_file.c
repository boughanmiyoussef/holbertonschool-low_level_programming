#include "main.h"

/**
 * append_text_to_file - function name
 * @filename:pointer
 * @text_content: text
 * Description: function that appends text at the end of a abc
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int i = 0, abc;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";

while (text_content[i] != '\0')
{
i++;
}
abc = open(filename, O_WRONLY | O_APPEND);
if (abc == -1)
return (-1);
write(abc, text_content, i);
return (1);
}
