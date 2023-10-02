#include <stdio.h>

/**
 * main - print the number of args passed to the program
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
