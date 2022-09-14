#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 2;
	c = 3;
	d = 0;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (d = 0; d < 50; d++)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld, ", c);
	return (0);
}
