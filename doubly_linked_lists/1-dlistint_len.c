#include "lists.h"

/**
 * dlistint_len - function name
 * @h: pointer
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *abc = h;
size_t cont = 0;
while (abc)
{
cont++;
abc = abc->next;
}
return (cont);
}
