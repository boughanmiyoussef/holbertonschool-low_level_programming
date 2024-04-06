#include "main.h"
/**
 * append_text_to_file - function name
 * @filename: The file's name.
 * @text_content: The file's content.
 * Return: 1 on sucess or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int text, error = -1, size = 0;

if (filename)
{
text = open(filename, O_RDWR | O_APPEND);
if (text > 0)
{
			
if (text_content)
{
while (text_content[size] != '\0')
size++;
error = write(text, text_content, size);
}
else
error = 1;
close(text);
}
}
return ((error >= 0) ? 1 : -1);
}
