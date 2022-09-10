#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry point
 * Description - printing single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
