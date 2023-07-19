#include <unistd.h>
#include "main.h"
/**
 * _putchar -write the character c to stdout
 * @c is the character to print
 *
 * Return: on succsess 1.
 *	on error, -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
