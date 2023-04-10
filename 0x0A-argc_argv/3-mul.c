#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: multiplies two numbers
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of commmand line arguments.
 * Return:0-success, 1-Error
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
