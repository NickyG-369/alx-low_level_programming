#include "main.h"
/**
 * _puts_recursion -> this is function to print string recursivly
 * @s: string parameter
 */
void _puts_recursion(char *s){
	if (*s)
	{
		_putchar(*s);
	 _puts_recursion(s + 1);

	}
	else		
	_putchar('\n');
}

