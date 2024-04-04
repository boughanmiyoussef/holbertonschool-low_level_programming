#include "lists.h"
/**
 * print_list - function name
 * @h: pointer to the list.
 * Return: number.
 **/
size_t print_list(const list_t *h)
{
size_t cont = 0;

while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
cont++;
h = h->next;
}

return (cont);
}
