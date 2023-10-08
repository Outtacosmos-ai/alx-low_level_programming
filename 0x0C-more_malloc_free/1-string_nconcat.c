#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with the first 'n' characters
 *                  from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	concatenated = malloc((len1 + n + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}

/**
 * main - Entry point
 *
 * Description: A sample program to demonstrate the string_nconcat function.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	unsigned int n = 5;

	char *result = string_nconcat(s1, s2, n);
	if (result == NULL)
	{
		fprintf(stderr, "Allocation failed\n");
		return (1);
	}

	printf("Concatenated string: %s\n", result);

	free(result);

	return (0);
}
