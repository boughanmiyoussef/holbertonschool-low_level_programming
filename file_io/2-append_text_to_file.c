#include "main.h"
/**
 * append_text_to_file - Function name
 * @filename: Is the file to read
 * @text_content: the text
 * Return: The letters and the status
 */
int append_text_to_file(const char *filename, char *text_content)
{

int abc, def, i = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

while (text_content[i] != 0)
i++;

abc = open(filename, O_WRONLY | O_CREAT | O_APPEND);

if (abc == -1)
return (-1);

def = write(abc, text_content, i);

if (def == -1)
return (-1);

close(abc);

return (1);
}
