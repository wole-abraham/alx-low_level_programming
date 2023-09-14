#include <stdlib.h>
/**
 * print_name - prirnts the char
 * @name: string
 * @f: pointer to function
 * Description: ****************
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);

}
