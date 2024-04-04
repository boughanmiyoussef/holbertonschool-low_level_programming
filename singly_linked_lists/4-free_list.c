#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function name
 * @head: pointer to the list_t list.
 */
void free_list(list_t *head)
{
list_t *abc;

while (head)
{
abc = head->next;
free(head->str);
free(head);
head = abc;
}
}
