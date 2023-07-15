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
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    putchar('\n');

    return 0;
}
