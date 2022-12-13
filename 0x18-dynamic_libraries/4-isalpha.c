#include "main.h"
/**
 * _isalpha - show letter if the input is c
 * Description: show letter of c
 * @c: int ascii table number
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
