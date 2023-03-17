#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Generates a random integer and
 * prints it and says wheather it is positive , negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d %s\n", n, "is zero");
	if (n < 0)
		printf("%d %s\n", n, "is negative");
	if (n > 0)
		printf("%d %s\n", n, "is positive");
	return (0);
}
