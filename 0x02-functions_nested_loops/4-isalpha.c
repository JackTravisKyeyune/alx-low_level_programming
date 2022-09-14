#include "main.h"

/**
 *_isapha - show letter if the input is c
 * letter another cases, shows 0
 * @c: int ascii table number
 * Returns: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || ((c >= 'A' && c <= 'Z'));
}
