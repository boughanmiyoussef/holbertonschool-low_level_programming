#include "lists.h"

/**
 * list_len - funtion name
 * @h: The linked list_t list.
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
size_t elements = 0;

while (h)
{
elements++;
h = h->next;
}

return (elements);
}
