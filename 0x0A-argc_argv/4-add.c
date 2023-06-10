#include <stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * main - write a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: the input array with the arguments
 *
 * Return: always 0 (success)
 **/

int main(int argc, char *argv[])
{
	int j, sum = 0, resy = 0;
	char c[] = "Error", *find_letter;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			find_letter = argv[j];
			while (*find_letter != 0)
			{
				if (*find_letter < 47 || *find_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				find_letter++;
			}
			resy = atoi(argv[j]);
			sum += resy;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
