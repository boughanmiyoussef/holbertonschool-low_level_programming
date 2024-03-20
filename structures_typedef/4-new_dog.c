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



Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 