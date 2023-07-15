#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
    char letter;

    for (letter = 'z'; letter >= 'a'; letter--)
    {
        putchar(letter);
    }

    putchar('\n');
    
    return 0;
}
