#include "main.h"
/**
 * swap_char - swaps two characters
 * @a: The first character
 * @b: The second character
 */
void swap_char(char *a, char *b)
{
	char temp = *a;

	*a = *b;
	*b = temp;
}
/**
 * rev_string - reverses the given string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end)
	{
		end++;
	}
	end--;
	while (start < end)
	{
		swap_char(start, end);
		start++;
		end--;
	}
}
