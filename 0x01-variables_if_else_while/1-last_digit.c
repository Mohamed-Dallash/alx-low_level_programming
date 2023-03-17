#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Generates a random integer, prints it and says wheather
 * the last digit is zero, greater than 5 or less than 6
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, n % 10 + 10);
	if (n % 10 + 10 == 0)
		printf("%s\n", "0");
	else if (n % 10 + 10 > 5)
		printf("%s\n", "greater than 5");
	else if (n % 10 + 10 < 6)
		printf("%s\n", "less than 6 and not 0");
	return (0);
}
