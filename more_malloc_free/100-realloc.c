#include "main.h"
#include <stdlib.h>
/**
 *_realloc -function that reallocate memory ussing malloc
 *
 * @ptr: pointer to allocate
 * @old_size: old size allocate
 * @new_size: new size to allocate
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *new_ptr;


	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		m = malloc(new_size);
	if (m == NULL)
		return (NULL);
	return (m);
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	new_ptr = ptr;
	m = malloc(sizeof(*new_ptr) * new_size);

	if (m == NULL)
		return (NULL);
}

