#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: The number for which we want to print the last digit
 *
 * Return: Last digit of x
 */
int print_last_digit(int x)
{
	int lastd = _abs(x % 10);

	_putchar ('0' + lastd);
	return (lastd);
}
