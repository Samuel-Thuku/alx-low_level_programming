#include "main.h"
/**
*_puts - a function a string followed by a new line.
*@str: the statement being displayed
*/
void _puts(char *str)
{
	char string[] = str;
	_puts("%s", string[]);
}
