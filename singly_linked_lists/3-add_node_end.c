#include "lists.h"

/**
 * add_node_end - function name
 * @head: pointer to the head of list
 * @str: string
 * Return: address of new node 
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *abc;
list_t *def = *head;

if (!head || !str)
return (NULL);

abc = malloc(sizeof(list_t));
if (!abc)
return (NULL);

abc->str = strdup(str);
if (!abc->str)
{
free(abc);
return (NULL);
}

abc->len = _strlen(abc->str);
abc->next = NULL;

if (def)
{
while (def->next)
def = def->next;
def->next = abc;
}
else
*head = abc;
return (abc);
}
