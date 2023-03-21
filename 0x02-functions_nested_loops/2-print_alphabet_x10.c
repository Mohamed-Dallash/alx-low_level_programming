#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase,  10 times
 */
void print_alphabet_x10(void)
{
	int n = 10, c;

	while (n--)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
	}
}
