#include "lists.h"

/**
 * add_dnodeint - function name
 * @start: pointer to the start of the list
 * @value: value to be added to the new node
 * Return: address of the new element
 **/
dlistint_t *add_dnodeint(dlistint_t **start, const int value)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
return (NULL);
    
new_node->n = value;
new_node->prev = NULL;
new_node->next = *start;
 
if (*start)
(*start)->prev = new_node;
   
*start = new_node;
return (new_node);
}

