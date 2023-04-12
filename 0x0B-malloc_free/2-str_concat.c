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
	unsigned long int i = 0, j, l1 = 0, l2 = 0;
	char *cpy;
	if (s1 != NULL)
		l1 = strlen(s1);
	if (s2 != NULL)
		l2 = strlen(s2);

	cpy = malloc(sizeof(char) * (l1 + l2 + 1));

	if (cpy == NULL)
		return (NULL);

	for (j = 0; j < l1; j++)
	{
		cpy[i] = s1[j];
		i++;
	}
	for (j = 0; j < l2; j++)
	{
		cpy[i] = s2[j];
		i++;
	}
	cpy[i] = '\0';

	return (cpy);
}
