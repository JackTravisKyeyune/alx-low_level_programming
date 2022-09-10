#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 10 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num = '0';

while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
