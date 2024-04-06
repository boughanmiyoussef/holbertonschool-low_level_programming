#include "lists.h"

/**
 * get_dnodeint_at_index - function name
 * @head: list
 * @index: index
 * Return: element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int a;

for (a = 0; a < index && head->next; a++)
{
head = head->next;
}

if (a < index)
return (NULL);

return (head);
}
