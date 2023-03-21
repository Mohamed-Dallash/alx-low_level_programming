#include "main.h"
/**
 * get_num_digits - returns the number of digits in a number
 * @num: The number for which we want to find the number of digits
 *
 * Return: Number of digits of num
 */
int get_num_digits(int num)
{
	int digits;

	if (num == 0)
		return (1);

	digits = 0;
	while (num)
	{
		digits++;
		num /= 10;
	}
	return (digits);
}

/**
 * print_digits - prints the digits of a number
 * @num: the number to be printed
 */
void print_digits(int num)
{
	if (num == 0)
		return;

	print_digits(num / 10);
	_putchar('0' + num % 10);
}

/**
 * print_num - prints spaces followed by a number in a certain number of slots
 * @num: number to be printed
 * @slots: number of slots for printing
 */
void print_num(int num, int slots)
{
	int num_digits = get_num_digits(num);
	int num_spaces = slots - num_digits;

	while (num_spaces--)
		_putchar(' ');
	if (num == 0)
		_putchar('0');
	else
		print_digits(num);

}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the for the n times table
 */
void print_times_table(int n)
{
	int row, col, num_slots = 4;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		for (col = 1; col <= n; col++)
		{
			_putchar(',');
			print_num(row * col, num_slots);
		}
		_putchar('\n');
	}
}
