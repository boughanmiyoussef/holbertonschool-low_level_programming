#include "main.h"

/**
 * main - Entry point of the program
 * @ac: Number of command-line arguments
 * @av: Array of command-line arguments
 * Return: 0 on success, non-zero on failure
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }

    res = create_file(av[1], av[2]);
    printf("-> %i\n", res);

    return (0);
}
