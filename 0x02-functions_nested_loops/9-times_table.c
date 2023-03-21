#include "main.h"
/**
 * print_num - prints a space followed by a number in 3 slots
 * @num: number to be printed
 */
void print_num(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + num);
	}
	else
	{
		_putchar(' ');
		_putchar('0' + num / 10);
		_putchar('0' + num % 10);
	}
}

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		for (col = 1; col <= 9; col++)
		{
			print_num(row * col);
			if (col < 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
