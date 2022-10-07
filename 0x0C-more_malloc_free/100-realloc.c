#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: memory previous allocated with a call to malloc
 * @old_size: integer size in bytes of the allocated space for ptr
 * @new_size: Integer size in bytes of the new memory block
 * Return: Pointer to the memory block of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *copy;
	int i, end;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL){
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL){
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	copy = ptr;
	if (new_ptr != NULL){
		if (old_size < new_size)
			end = old_size / sizeof(ptr);
		else
			end = new_size / sizeof(ptr);
		for (i = 0; i < end; i++)
			new_ptr[i] = copy[i];
	}
	else
		return (NULL);
	return (new_ptr);
}
