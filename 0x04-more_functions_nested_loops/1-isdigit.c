#include <stdio.h>
#include "main.h"

/**
 * _isdigit - start of program
 * @c : int value
 * Return: is 0 or 1
 */


int _isdigit(int c)
{
/*char ch;*/
/*ch = c + '0';*/

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
