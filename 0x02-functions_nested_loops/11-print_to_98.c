#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from n to 98
 * @n: an integer
 * @n: print from this number
 * Return: no return value
 */
void print_to_98(int n)
{
	int step = (n > 98 ? -1 : 1);
	int i = n;
	int + stop = 98 + step;

	while (i != stop)
	{
		if (i != n)
			printf(", ");
		printf("%d", i);
		i += step;
	}
	printf("\n");
}
