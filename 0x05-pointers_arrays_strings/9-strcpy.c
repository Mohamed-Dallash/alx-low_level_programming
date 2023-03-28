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

	do {
		*dest = *src;
		dest++;
		src++;
	} while (*src);

	return (ret);
}
