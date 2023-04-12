#include "main.h"
/**
 * _strdup - Creates a copy of a string
 * Description: returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: Pointer to the start of the string,
 *	NULL if the array cannot be created
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned long int i;

	if (str == NULL)
		return (NULL);

	cpy = malloc(sizeof(char) * (strlen(str) + 1));

	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		cpy[i] = str[i];

	return (cpy);
}
