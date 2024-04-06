#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function name
 * @head: list
 * @n: number
 * Return: new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *first;

first = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

if (*head == NULL)
{
new->next = NULL;
new->n = n;
new->prev = NULL;
*head = new;
return (new);
}
while (first->next)
{
first = first->next;
}
first->next = new;
new->prev = first;
new->next = NULL;
new->n = n;
return (new);
}
