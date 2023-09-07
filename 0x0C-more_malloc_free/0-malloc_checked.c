#include <stdlib.h>
/**
 * malloc_checked - Entry pint
 * Description: ^^^^
 * @b: jih
 * Return: that
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}

