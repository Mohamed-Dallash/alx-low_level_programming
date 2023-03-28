#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: given string
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (!(*str))
		{
			break;
		}
		str++;
	}
	_putchar('\n');
}
