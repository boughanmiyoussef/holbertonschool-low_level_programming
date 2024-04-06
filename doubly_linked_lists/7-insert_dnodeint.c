#include "lists.h"
/**
 * insert_dnodeint_at_index - function name
 * @h: Pointer
 * @n: integer
 * @idx: Position
 * Return: The direction of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *abc, *xyz = *h;

if (idx == 0)
return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
if (xyz == NULL)
return (NULL);
xyz = xyz->next;
}

if (xyz->next == NULL)
return (add_dnodeint_end(h, n));

abc = malloc(sizeof(dlistint_t));

if (abc == NULL)
return (NULL);

abc->n = n;
abc->next = xyz->next;
abc->prev = xyz;
xyz->next->prev = abc;
xyz->next = abc;

return (abc);
}
