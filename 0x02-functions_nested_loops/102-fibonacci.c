#include "main.h"
#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, temp, lastlast = 1, last = 2;

	printf("%ld, %ld", lastlast, last);
	for (i = 3; i <= 50; i++)
	{
		printf(", ");
		printf("%ld", lastlast + last);
		temp = last;
		last += lastlast;
		lastlast = temp;
	}
	printf("\n");
	return (0);
}
