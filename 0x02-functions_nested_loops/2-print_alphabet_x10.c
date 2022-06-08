#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/
void print_alphabet_x10(void)
{
	int alph;
	int k = 1;

	While(k++ <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
	}
return (0);
}
