#include <stdio.h>

/**
 * main - Printing alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; C++)
		putchar(c);

	putchar('\n');

	return (0);
}	