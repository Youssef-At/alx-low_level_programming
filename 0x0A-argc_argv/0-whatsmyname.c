#include <stdio.h>
#include"main.h"

/**
 * main - Write a program that prints its name
 *
 * @argc: the input size of argv array
 *
 * @argv: the array
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
