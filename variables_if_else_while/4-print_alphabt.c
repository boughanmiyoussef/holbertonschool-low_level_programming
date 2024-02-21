#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'alphabet execpt '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int alpha;
    for (alpha = 'a'; alpha <= 'z' ; alpha++)
    {
        if (alpha == 'q' || alpha == 'e')
        {
            continue;
        }
        putchar (alpha);
    }
    putchar('\n');
    return (0);
}