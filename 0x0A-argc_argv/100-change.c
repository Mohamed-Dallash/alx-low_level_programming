#include "main.h"
/**
 * main - Entry point
 * Description: Prints the minimum number of coins
 *	to make change for an amount of money.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int money, ans = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	ans += money / 25;
	money %= 25;
	ans += money / 10;
	money %= 10;
	ans += money / 5;
	money %= 5;
	ans += money / 2;
	money %= 2;
	ans += money;

	printf("%d\n", ans);

	return (0);
}
