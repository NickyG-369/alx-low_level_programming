#include "main.h"
#include <stdio.h>

/**
*swap_int -. given two intergers swap the values they are holding
* @: parameter  1
* @b: parameter 2
* Return: Always 0 (success)
* Description: This function takes a pointer to an int as parameter
*  and updates the value it points to to 98.
*/

void swapint(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
