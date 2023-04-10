#include "main.h"
/**
 * isInt - Check if string is an integer
 * @s: string to be checked
 * Return: 1 if it is an integer, 0 otherwise
 */
int isInt(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - Entry point
 * Description: Prints the sum of the passed arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isInt(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

