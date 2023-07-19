#include "main.h"
/**
 * print alphapet
 *
 */
void print_alphabet_x10(void)
{
	int line, ch;
	
	for(line = 1; line <= 9; line++)
	{
		for(ch= 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');

	}
}
