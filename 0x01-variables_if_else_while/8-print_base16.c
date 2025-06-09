#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char ch;

    for (i = 0; i <= 9; i++)
    {
        printf("%d", i);
    }
    for (ch = 'a'; ch <= 'f'; ch++)
    {
        printf("%c", ch);
    }
    return (0);
}