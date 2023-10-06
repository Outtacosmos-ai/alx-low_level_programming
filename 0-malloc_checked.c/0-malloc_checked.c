#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of memory to be allocated.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the program terminates with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		perror("Memory allocation failed");
		exit(98);
	}

	return (ptr);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	void *ptr;
	char *str = "Hello, World!";

	printf("Attempting to allocate memory...\n");

	ptr = malloc_checked(1000); /* Allocate 1000 bytes */

	/* Use the allocated memory here if needed */

	free(ptr); /* Don't forget to free the allocated memory when done */

	printf("Memory allocation successful!\n");

	return (0);
}
