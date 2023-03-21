#include "main.h"
#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int temp, ans = 2, lastlast = 1, last = 2;

	while (last + lastlast <= 4000000)
	{
		if ((lastlast + last) % 2 == 0)
			ans += lastlast + last;
		temp = last;
		last += lastlast;
		lastlast = temp;
	}
	printf("%ld\n", ans);
	return (0);
}
