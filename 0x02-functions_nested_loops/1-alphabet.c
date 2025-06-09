#include <stdio.h>
#include "main.h"

void print_alphabet(void);

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n');
    
}
