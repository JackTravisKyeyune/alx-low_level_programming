#include <stdio.h>

/**
 * main - Print all possible combo of two two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int c;
int d;
int e;
int f = 0;

while (f < 10)
{
e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (!(f + e == 18 && c + d == 17 && d == 9))
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
e++
}
f++;
}
putchar('\n');
return (0);
}
