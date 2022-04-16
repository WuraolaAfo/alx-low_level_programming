#include "main.h"

/**
*_islower - check if a character is lowercase
*@x: The character to check
*Return: 1 if x is lowercase
*Otherwise 0.
*/

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	return (0);
}
