#include "lists.h"

/**
 * add_node - function naame
 * @head: pointer to head of list
 * @str: string
 * Return: address of new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *abc;

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
abc->next = *head;
*head = abc;
return (abc);
}
