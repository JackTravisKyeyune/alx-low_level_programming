#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: nmber of command line arguments
 * @argv: array that contains the command line arguments of the program
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
