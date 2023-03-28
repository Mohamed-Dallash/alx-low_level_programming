#include "main.h"
/**
 * puts_half - prints the second half of the given string
 * @str: given string
 */
void puts_half(char *str)
{
	char *start = str;
	char *end = str;

	while (*end)
	{
		end++;
	}
	end--;
	while (start < end)
	{
		start++;
		end--;
	}
	end++;
	while (*end)
	{
		_putchar(*end);
		end++;
	}
	_putchar('\n');
}
