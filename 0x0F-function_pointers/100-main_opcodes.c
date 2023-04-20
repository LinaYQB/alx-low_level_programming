#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	char *c = (char *)main;
	int x;

	if (argc != 2)
		printf("Error\n"), exit(1);
	x = atoi(argv[1]);
	if (x < 0)
		printf("Error\n"), exit(2);

	while (x--)
		printf("%02hhx%s", *c++, x ? " " : "\n");
	return (0);
}
