#include <stdio.h>
#include"main.h"

/**
 * main - function that Prints all arguments it receives.
 *
 * @argc: the input size of argv array
 *
 * @argv: the array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
	printf("%s\n", argv[j]);
	}

	return (0);
}
