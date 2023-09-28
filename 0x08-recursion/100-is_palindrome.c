#include <stdio.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = 0;
    int i, j;

    // Calculate the length of the string
    while (s[length] != '\0')
        length++;

    // Compare characters from the beginning and end of the string
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        // If characters do not match, it's not a palindrome
        if (s[i] != s[j])
            return 0;
    }

    // If we reached here, it's a palindrome
    return 1;
}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}

