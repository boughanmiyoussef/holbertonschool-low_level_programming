#include "lists.h"

/**
 * delete_dnodeint_at_index - function name
 * @head: pointer
 * @index: index position
 * Description: delete node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *n_element = *head;

if (!head)
return (-1);

if (head)
{
while (index && n_element)
{
n_element = n_element->next;
index--;
}

if (index)
return (-1);

if (!index && n_element)
{
if (n_element->next)
n_element->next->prev = n_element->prev;

if (n_element->prev)
n_element->prev->next = n_element->next;

else
*head = n_element->next;
free(n_element);
return (1);
}
}
return (-1);
}
