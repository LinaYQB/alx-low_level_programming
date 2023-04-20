#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0 (success)
*/
int main(int argc, char **argv)
{
	int (*op)(int, int), x, y;

	if (argc != 4)
		printf("Error\n"), exit(98);

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (!op)
		printf("Error\n"), exit(99);

	if (!y && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op(x, y));
	return (0);
}
