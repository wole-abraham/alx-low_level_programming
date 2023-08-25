#include "main.h"
/**
 * reverse_array - reverse the value of the array
 * @a: pointer to interger array
 * @n: n times values to reverse
 * Description: ^^^
 * Return:
 */

void reverse_array(int *a, int  n)
{
	int i;
	int *end;
	int temp;
	int *begin;

	end = a;
	begin = a;


	for (i = 0; i < n; i++)
	{
		end++;
	}

	end--;



	for (i = 0; i < n / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		end--;
		begin++;
	}



}


