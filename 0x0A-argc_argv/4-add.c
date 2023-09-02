#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry poin
 * @argc: arguement counter
 * @argv: arguement vecot
 * Description: adds h
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, c, d, sum;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);

	}


	for (c = 1; c < argc; c++)
		for (d = 0; argv[c][d] != '\0'; d++)
			if (argv[c][d] < '0' || argv[c][d] > '9')
			{
				printf("Error\n");
				return (1);

			}
	sum = 0;
	for (i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);
	printf("%d\n", sum);

	return (0);

}




