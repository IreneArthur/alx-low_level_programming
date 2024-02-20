#include <stdio.h>
/**
 *
*/
int main(void)
{
	int a = 0;
	int b = 1;
	int c;

	printf("%d, %d, ", a, b);
	int i = 2;

	while (i < 50)
	{
		c = a + b;
		printf("%d", c);
		if (i != 49)
		{
			printf(", ");
		}
		a = b;
		b = c;
		i++;
	}
	printf("\n");
	return (0);
}
