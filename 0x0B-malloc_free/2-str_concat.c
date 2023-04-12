#include "main.h"
/**
 * str_concat - Concatenates two strings
 * Description: returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the strings given as a parameter.
 * @s1: first string
 * @s2: second string
 * Return: Pointer to the start of the string,
 *	NULL if the array cannot be created
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i = 0, j;
	char *cpy = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (cpy == NULL)
		return (NULL);

	for (j = 0; j < strlen(s1); j++)
	{
		cpy[i] = s1[j];
		i++;
	}
	for (j = 0; j < strlen(s2); j++)
	{
		cpy[i] = s2[j];
		i++;
	}
	cpy[i] = '\0';

	return (cpy);
}
