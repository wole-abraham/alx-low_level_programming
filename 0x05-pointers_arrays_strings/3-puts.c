#include "main.h"
/**
 * _puts - entry point
 * @str: pointer char
 * Description: i really dont understand str[i] ins *str[i]
 * Return:
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

}
