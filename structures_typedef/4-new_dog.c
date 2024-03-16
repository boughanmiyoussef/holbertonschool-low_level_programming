#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - function name
 * @str:string
 *
 * Return: copy
 */
char *_strdup(char *str)
{
	char *abc;
	unsigned int length = 0;

	if (str)
	{
		while (str[length++])
			;

		abc = malloc(sizeof(char) * length);
		if (abc)
		{
			while (length--)
				abc[length] = str[length];

			return (abc);
		}
	}
	return (NULL);
}

/**
 * new_dog - function name
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	if (name)
	{
		d->name = _strdup(name);
		if (!(d->name))
		{
			free(d);
			return (NULL);
		}
	}
	else
		d->name = NULL;

	d->age = age;

	if (owner)
	{
		d->owner = _strdup(owner);
		if (!(d->owner))
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	}
	else
		d->owner = NULL;

	return (d);
}