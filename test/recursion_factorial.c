#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
		return (1);
	return(n * factorial(n - 1));

}

int main(void)
{
	int i;

	i = factorial(5);

	printf("%d", i);
	
	return (0);
}
