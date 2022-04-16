#include "main.h"

/**
*_isalpha - check if a character is alphabetical
*@x: The character to check
*Return: 1 if c is alphabetical.
*Otherwise 0.
*/

int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}
