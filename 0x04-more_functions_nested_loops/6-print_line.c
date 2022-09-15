#include "main.h"

/**
 * print_line - prints a straight line
 * @n: integer amount of _
 * Return: Always 0
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
