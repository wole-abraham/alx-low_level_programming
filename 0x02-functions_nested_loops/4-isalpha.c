/**
 * _isupper - returns 0 or 1 if int c is upper case
 * Description: above
 * @c: parameter
 * Return: 0 or 1
 */

#include "main.h"

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	else
		return (0);
}
