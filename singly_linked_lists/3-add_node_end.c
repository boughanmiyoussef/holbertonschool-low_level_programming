#include "lists.h"
#include <string.h>

/**
 * add_node_end - function name
 * @head: pointer to pointer to head of list
 * @str: string to initialize node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
size_t i = 0;
list_t *xyz = *head;
list_t *abc = malloc(sizeof(list_t));

if (abc == NULL)
return (NULL);
	
abc->next = NULL;
abc->str = strdup(str);

if (abc->str)
while (str[i])
++i;
abc->len = i;

if (xyz)
{
while (xyz->next)
xyz = xyz->next;
xyz->next = abc;
}

else
*head = abc;
return (abc);
}
