#include "main.h"
/*
* main - this is the starting point
*
* Return: Always
*/ 
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		int k;
		for (k = 1; k <=10; k++)
		_putchar(alph);
	}
		_putchar('\n');

return (0);
}
