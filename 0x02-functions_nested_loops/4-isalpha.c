#include "main.h"
/**
 *_isalpha - checks for alphabetical letters
 *@c: a charter to be checked on
 *Return:  if character is letter , lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	 if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
