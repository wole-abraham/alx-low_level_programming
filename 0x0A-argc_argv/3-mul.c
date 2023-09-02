#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: parm
 * @argv: param
 * Description: ^^^^^
 * Return: always
 */
int main(int argc, char *argv[])
{
	int i;

	int mul = 1;

	if (argc < 2 || argc < 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}

	printf("%d\n", mul);

	return (0);

}



