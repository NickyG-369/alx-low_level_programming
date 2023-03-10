#include "main.h"
#include <string.h>

/**
 *_memset - fills memory with constant byte.
 *fills the first n bytes of the memory area pointed
 *to by s with the constant b.
 *@s: pointer to memory area.
 *@b: constant to fill memory with.
 *@n: bytes of the memory area to be filled.
 *Return: pointer to memory area s.
 */
char *_memset(char *s, char b, insigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
