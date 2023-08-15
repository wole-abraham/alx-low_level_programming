/**
 * _islower - returns 0 or 1 if int c is lowercase
 * Description: above
 * @c: parameter
 * Return: 0 or 1
 */

#include "main.h"

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
		return (0);
}
