#include "main.h"
/**
* print_alphabet_10x - print alphabet 10 times
* Return: Always 0
*/
void print_alphabet_x10(void)
{
int i, n;
for (i = 0; i < 9; i++)
{
for (n = 97; n <= 122; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
