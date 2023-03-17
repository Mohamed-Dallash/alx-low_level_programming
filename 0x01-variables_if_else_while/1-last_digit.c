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
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is %d and is ", n, m);
	if (m == 0)
		printf("%s\n", "0");
	else if (m > 5)
		printf("%s\n", "greater than 5");
	else if (m < 6)
		printf("%s\n", "less than 6 and not 0");
	return (0);
}
