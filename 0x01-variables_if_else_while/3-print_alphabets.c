#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Prints the size of various types on the computer it is 
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);






}
