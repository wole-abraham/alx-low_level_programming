#include "main.h"
/**
 * _puts_recursion: prints a string
 * @s: pointer to string
 * Description: ^^^^^^^
 * Return: 0;
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
