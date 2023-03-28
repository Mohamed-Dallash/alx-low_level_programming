#include "main.h"
/**
 * _strlen - gets the length of the given string
 * @s: The given string
 * Return: length of string s
 */
int _strlen(char *s)
{
	int ans = 0;

	while (*s)
	{
		ans++;
		s++;
	}
	return (ans);
}
