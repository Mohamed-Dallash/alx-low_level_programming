#include "main.h"
/**
 * _strcpy - copies string
 * @src: source pointer
 * @dest: destination pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	if (*ret == '\0')
	{
		return (ret);
	}
	do {
		*dest = *src;
		dest++;
		src++;
	} while (*src);
	*dest = *src;

	return (ret);
}
