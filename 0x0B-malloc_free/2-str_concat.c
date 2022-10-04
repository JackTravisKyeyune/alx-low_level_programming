#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate.
 *
 * Return: Pointer to newly allocated memory which
 * is equal to @s1 + @s2 (success) or NULL (Failure)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char *alloc_mem;
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_length) != '\0')
		s1_length++;
	while (*(s2 + s2_length) != '\0')
		s2_length++;

	alloc_mem = malloc(1 + (s1_length * sizeof(*s1)) + (s2_length * sizeof(*s2)));
	if (alloc_mem == NULL)
		return ('\0');

	for (a = 0; a < s1_length; a++)
		alloc_mem[a] = *(s1 + a);
	for (b = 0; b < s2_length; b++, a++)
		alloc_mem[a] = *(s2 + j);
	return (alloc_mem);
}
