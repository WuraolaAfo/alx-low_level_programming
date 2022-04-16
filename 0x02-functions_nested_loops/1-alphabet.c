#include "main.h"

/**
*print_alphabet - print the alphabet
*Description-print the alphabet, in lowercase, followed by a new line
*Return:this program returns zero
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; ++x)
		_putchar(x);
	_putchar('\n');
}


