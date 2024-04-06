#include "lists.h"

/**
 * print_dlistint - function name
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *abc = h;
size_t cont = 0;
while (abc)
{
printf("%i\n", abc->n);
cont++;
abc = abc->next;
}
return (cont);
}
