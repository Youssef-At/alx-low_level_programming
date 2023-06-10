#include <stdio.h>
#include "main.h"

/**
 * main - A Program that multiplies two numbers
 * @argc: the input size of argv array
 * @argv: the input array of size argc
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x, y, mult;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
		return (1);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);

	mult = x * y;
	printf("%d\n", mult);
	return (0);
}
/**
 * _atoi - function converts a string to an integer
 * @s: the input string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int j, b, m, lenght, r, dig;

	j = 0;
	b = 0;
	m = 0;
	lenght = 0;
	r = 0;
	dig = 0;

	while (s[lenght] != '\0')
		lenght++;

	while (j < lenght && r == 0)
	{
	if (s[j] == '-')
	++b;
	if (s[j] >= '0' && s[j] <= '9')
	{
	dig = s[j] - '0';

	if (b % 2)
	dig = -dig;

	m = m * 10 + dig;
	r = 1;

	if (s[j + 1] < '0' || s[j + 1] > '9')
	break;

	r = 0;
	}
	j++;
	}

	if (r == 0)
	return (0);
return (m);
}
