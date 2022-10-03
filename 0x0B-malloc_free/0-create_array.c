#include <stdlib.h>

/**
 * create_array - creates an array and specializes it with special
 * character
 * @size: size of the array of chars to be created
 * @c: char value to intialize the array with
 *
 * Return: pointer to the array created OR NULL if @size = 0 or
 * the creation of the array fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(size);

	if (arr == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[size] = '\0';
	return (arr);
}
