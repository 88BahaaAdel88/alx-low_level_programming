#include <stdio.h>
/**
 * main - prints out all arguments including the first one
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
