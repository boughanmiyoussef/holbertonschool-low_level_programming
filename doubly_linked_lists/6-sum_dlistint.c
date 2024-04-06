#include "lists.h"

/**
 * sum_dlistint - function name
 * @head: list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
int abc = 0;
while (head != NULL)
{
abc += head->n;
head = head->next;
}
return (abc);
}
