#include "main.h"
/**
 *print_alphabetx10 -> prints the lowercase alphabets
 *
 * Return: 0 always (success)
 */
void print_alphabetx10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
