#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: print putchar
 *
 * Return: on succsess 1.
 * 	   on error, -1 is returned 
*/

int _putchar(char c)
{
	
	return (write( 1, &c, 1));
}
