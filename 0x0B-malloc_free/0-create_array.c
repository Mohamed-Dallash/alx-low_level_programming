#include "main.h"
/**
 * create_array - Creates an array
 * Description:  Creates an array of chars,
 *	and initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to initialize the array with
 * Return: Pointer to the start of the array,
 *	NULL if the array cannot be created
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL || size == 0)
		return (NULL);
	while (size--)
		arr[size] = c;

	return (arr);
}
