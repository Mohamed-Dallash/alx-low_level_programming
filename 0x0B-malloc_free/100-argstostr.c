#include "main.h"
/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: argument count
 * @av: argument vector
 * Return: Pointer to the start of the string,
 *	NULL if the array cannot be created
 */
char *argstostr(int ac, char **av)
{
	int i, k = 0, size = 0;
	char *ans;
	unsigned long int j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += strlen(av[i]) + 1;
	ans = malloc(sizeof(char) * (size + 1));
	if (ans == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			ans[k] = av[i][j];
			k++;
		}
		ans[k] = '\n';
		k++;
	}
	ans[k] = '\0';

	return (ans);
}
