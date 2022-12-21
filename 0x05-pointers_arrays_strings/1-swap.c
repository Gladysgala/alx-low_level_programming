#include "main.h"

/**
 * swap_int - swaps the values of the two intergers
 * @a: integer that needs swapping
 * @b: integer that needs swapping
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
		*a = *b;
		b = p;
}
