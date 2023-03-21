#include "main.h"
/**
 * _abs - prints the sign of a number
 * @x: The number for which we want to find the absolute value
 *
 * Return: Absolute value of x
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	return (0 - x);
}
