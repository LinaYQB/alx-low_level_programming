#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: char pointer to change
 * @to: char pointer to go to
 * no return - void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
