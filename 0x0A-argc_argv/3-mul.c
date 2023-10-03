#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication
 * @argc: the number of command line arguments
 * @argv: array of the command line arguments
 * Return: 1 if there's an error,else 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int i = num1 * num2;

	printf("%d\n", i);

	return (0);
}
