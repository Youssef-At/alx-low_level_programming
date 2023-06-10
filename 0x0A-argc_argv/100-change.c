#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins to make change
 * @argc: the input number of args
 * @argv: the input array with the args
 *
 * Return: always 0 (success)
 **/

int main(int argc, char *argv[])
{
	int led = 0, coins = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	led = atoi(argv[1]);
	while (led >= 25)
	{
		led -= 25;
		coins++;
	}
	while (led >= 10)
	{
		led -= 10;
		coins++;
	}
	while (led >= 5)
	{
		led -= 5;
		coins++;
	}
	while (led >= 2)
	{
		led -= 2;
		coins++;
	}
	if (led == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
