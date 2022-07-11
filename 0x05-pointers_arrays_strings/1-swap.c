#include "main.h"
/**
*swap_int -. given two intergers swap the values they are holding
*@: parameter  1
*@b: parameter 2
* Return: Always 0 (success)
*/
void swapint(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
