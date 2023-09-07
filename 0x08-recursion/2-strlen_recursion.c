#include <stdio.h>
/**
 * _strlen_recursion - Entry
 * @s: the strinig
 * Return: the lenght
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}


int main(void)
{
	int f;
	f = _strlen_recursion("hello");

	printf("%d", f);

	return(0);
}
