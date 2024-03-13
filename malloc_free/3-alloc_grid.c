#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * @width: width
 * @height: height
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
int **abc;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

abc = malloc(height * sizeof(int *));
if (abc == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
abc[x] = malloc(width * sizeof(int));
if (abc[x] == NULL)
{
while (x--)
free(abc[x]);
free(abc);
return (NULL);
}
}

for (x = 0; x < height; x++)
for (y = 0; y < width; y++)
abc[x][y] = 0;

return (abc);
}






int **alloc_grid(int width, int height)
{
    int **youssef;
    int x;
    int y;

    if (width <= 0 || height <= 0)
    return(NULL);

    youssef = malloc(height * sizeof(int *))
    if (youssef == NULL)
    return(NULL);

    for (x )

}   