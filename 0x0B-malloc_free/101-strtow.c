#include "main.h"
int get_num_words(char *str)
{
	int ans = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			ans++;
			while (*str && *str != ' ')
			{
				str++;
			}
		}
		else
			str++;
	}
	return ans;
}
int *get_sizes(int num_words, char *str)
{
	int i = 0,temp;
	int *sizes = malloc(sizeof(int) * num_words);

	while (*str)
	{
		temp = 0;
		if (*str != ' ')
		{
			while (*str && *str != ' ')
			{
				str++;
				temp++;
			}
			sizes[i] = temp;
		}
		else
			str++;
	}
	return sizes;
}


/**
 * strtow - splits a string into words
 * @str: the given string
 * Return: Pointer to the start of the array of words,
 *	NULL if the array cannot be created
 */
char **strtow(char *str)
{
	int num_words, i = 0, j;
	int *sizes;
	char **ans;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	num_words = get_num_words(str);
	ans = malloc(sizeof(char *) * num_words);

	if (ans == NULL)
		return (NULL);

	sizes = get_sizes(num_words, str);
	for (i = 0; i < num_words; i++)
		ans[i] = malloc(sizeof(char) * (sizes[i] + 1));
	i = 0;
	while (*str)
	{
		j = 0;
		if (*str != ' ')
		{
			while (*str && *str != ' ')
			{
				ans[i][j] = *str;
				str++;
				j++;
			}
			ans[i][j] = '\0';
			i++;
		}
		else
			str++;
	}

	return (ans);
}
