#include "main.h"
/**
 * _isdigit - entry point
 * @c: parameter
 * Description: check if int c is integer
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
		return (0);
}
