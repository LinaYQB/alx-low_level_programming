#include "function_pointers.h"

/**
 * array_iterator - executes func on each element of an array
 * @array: array of int where we execute
 * @size: size of the array
 * @action: pointer to the function you need to use
 * No return - void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array && action)
	{
		s = 0;
		while (s < size)
		{
			action(array[s]);
			s++;
		}
	}
}
