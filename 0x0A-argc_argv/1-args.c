#include <stdio.h>

/**
 * main - print Number of arguments passed into it.b
 *
 * @argc: th input size of argv array
 *
 * @argv: the input array of size argc
 *
 * Return: always 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
