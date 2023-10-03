#include <stdio.h>
/**
 * main - return number of arguments writter
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i = 0;
	(void) argv;
	while (i < (argc - 1))
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
