#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * description: adds positive numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int ad = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		ad += atoi(argv[argc]);
	}
	printf("%d\n", ad);
	return (0);
}
