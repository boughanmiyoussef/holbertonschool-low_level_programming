#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * add_node - function name
  *
  * @head: pointer
  * @str: string
  * Return: address of new element
  */
list_t *add_node(list_t **head, const char *str)
{
list_t *abc;

if (!(head))
return (NULL);

abc = malloc(sizeof(list_t));
if (abc == NULL)
return (NULL);
	
if (str)
abc->str = strdup(str);
	
abc->next = *head;
*head = abc;
	
return (abc);
}
