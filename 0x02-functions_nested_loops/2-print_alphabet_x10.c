#include "main.h"

/**
 *print_alphabet_x10 - function that will print the alphabet 10 times 
 *
 **/

void print_alphabet_x10(void)
{
    int line, ch;
    
    for (line = 'a'; line <= 'j'; line++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}
