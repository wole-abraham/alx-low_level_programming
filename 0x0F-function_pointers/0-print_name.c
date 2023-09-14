#include <stdlib.h>
/**
 * print_name - prirnts the char
 * @name: string
 * @f: pointer to function
 * Description: ****************
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	{
		exit(1);
	}


	else
		f(name);

}
