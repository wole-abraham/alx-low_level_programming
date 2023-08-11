#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - void
 * Description: generates a random number that is run against multiple staments
 * Return: 0
*/

int main(void)
{
	int n;
	int last_digit;
	char prompt[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", prompt, n, last_digit);
	}
	else if  (last_digit == 0)
	{
		printf("%s %d is %d and is 0\n", prompt, n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", prompt, n, last_digit);
	}


	return (0);
}
