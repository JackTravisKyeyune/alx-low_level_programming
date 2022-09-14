#include <stdio.h>

/**
 * main - program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024
 * Return: int.
 */
int main(void)
{
	int sum = 0;
	int x  = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum = sum + x;
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
