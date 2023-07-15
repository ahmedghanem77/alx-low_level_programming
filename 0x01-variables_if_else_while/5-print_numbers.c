#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints digits from 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int digit = 0;

        while (digit <= 9)
        {
                printf("%i", digit);
                digit++;
                if (digit <= 9)
                        printf(", ");
        }
        printf("\n");

        return (0);
}
