#include "main.h"
/**
 * print_num - prints 2 digit number
 * @num: number to be printed
 */
void print_num(int num)
{
	_putchar('0' + num / 10);
	_putchar('0' + num % 10);
}

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			print_num(hour);
			_putchar(':');
			print_num(minute);
			_putchar('\n');
		}
	}
}
