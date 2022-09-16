#include "main.h"

/**
 * print_diagonal - print diagonal using /
 * @n: number of times / to be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		}
	else
	{

		int i, j;

		for (i = 0; j < n; j++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
