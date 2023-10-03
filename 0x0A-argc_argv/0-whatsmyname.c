#include "main.h"
#include <stdio.h>
/**
 * main - returns the name of the program
 * Return: always 0
 * @argc: the number of command line arguments
 * @argv: an array of the command line arguments
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
