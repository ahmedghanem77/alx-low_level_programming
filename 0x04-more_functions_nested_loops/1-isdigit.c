#include "main.h"

/**
 * isdigit  - check if input is digit between 0 - 9
 *
 * @c :digit
 *
 * Return: 1 if is digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
