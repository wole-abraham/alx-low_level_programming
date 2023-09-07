#include <stdio.h>

int  _pow(int x, int y)
{
	if (y < 0 )
		return (-1);
	if (y == 1)
		return(x);
	if (y > 1)
		return (x *_pow(x, y-1));
	else
		return(1);
}

int main(void)
{
	printf("%d", _pow(5, 6));
	return (0);
}
