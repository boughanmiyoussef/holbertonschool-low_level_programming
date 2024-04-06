#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
dlistint_t *initial_node;
dlistint_t *next_element;
if (head)
{
initial_node = head;
next_element = head->next;
while (next_element)
{
free(initial_node);
initial_node = next_element;
next_element = next_element->next;
}
free(initial_node);
}
}
