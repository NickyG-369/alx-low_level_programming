#include "main.h"
/**
 *_isalpha - checks for alphabetical letters
 @c: a charter to be checked on
 *Return: return 0 and 1 depending on condition
 */
int _isalpha(int c)
{
	 if ((c >= 'a' &&  <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);


}