#include "main.h"
/**
 * print_array - prints the first n elements of the given array
 * @a: the array
 * @n: the number of elements to be printed
 */
void print_array(int *a, int n)
{
	while (n-- > 0)
	{
		printf("%d", *a);
		a++;
		if (n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
