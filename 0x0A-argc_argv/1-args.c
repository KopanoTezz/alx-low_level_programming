#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    /* Subtract 1 from argc to exclude the program name itself */
    int num_args = argc - 1;

    printf("%d\n", num_args);

    return (0);
}
