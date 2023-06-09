#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

	printf("%d\n", count);

	return (0);
}
