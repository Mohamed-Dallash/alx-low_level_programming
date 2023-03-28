#include "main.h"
/**
 * print_rev - prints string in reverse followed by a new line
 * @s: The given string
 */
void print_rev(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		ptr++;
	}
	for (; ptr >= s; ptr--)
	{
		_putchar(*ptr);
	}
	_putchar('\n');
}
