#include <stdio.h>
/**
 * add - additionne deux nombres entiers
 * @x: 1st param
 * @y: 2nd param
 * Return: int as result
*/
int add(int x, int y)
{
	return (x + y);
}

/**
 * sub - soustrait deux nombres entiers
 * @x: 1st param
 * @y: 2nd param
 * Return: int as result
*/
int sub(int x, int y)
{
	return (x - y);
}

/**
 * mul - miltiplie deux nombres entiers
 * @x: 1st param
 * @y: 2nd param
 * Return: int as result
*/
int mul(int x, int y)
{
	return (x * y);
}

/**
 * div - divise deux nombres entiers
 * @x: 1st param
 * @y: 2nd param
 * Return: int as result
*/
int div(int x, int y)
{
	if (y == 0)
	{
		printf("erreur!\n");
		return (0);
	}
	return (x / y);
}

/**
 * mod - retourne le reste de la divison de deux nombres entiers
 * @x: 1st param
 * @y: 2nd param
 * Return: int as result
*/
int mod(int x, int y)
{
	if (y == 0)
	{
		printf("erreur!\n");
		return (0);
	}
	return (x % y);
}
