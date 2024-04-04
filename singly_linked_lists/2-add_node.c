#include "lists.h"
#include <string.h>

/**
 * add_node - function name
 * @head: pointer to start of list
 * @str: string
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
size_t i = 0;
list_t *abc = malloc(sizeof(list_t));

if (abc == NULL)
return (NULL);
	
abc->next = *head;
abc->str = strdup(str);
	
if (abc->str)
while (abc->str[i])
++i;
	
abc->len = i;
*head = abc;
return (abc);
}

