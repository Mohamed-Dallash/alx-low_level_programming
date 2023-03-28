#include "main.h"
/**
 * _puts - prints string followed by a new line
 * @str: The given string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
