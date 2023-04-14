#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer reallocated
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)new_ptr + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (new_ptr);
}
