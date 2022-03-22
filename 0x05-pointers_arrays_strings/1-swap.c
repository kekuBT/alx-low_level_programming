#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	*a = 42;
	*b = 98;
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
