#include <stdio.h>
/**
 *prints_to_98 - prints all natural numbers from input 98 in order  *seperate by comma followed by space.
 * @n: Thenumber to begin counting at.
 *
 */
void print_to_be(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n > 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
