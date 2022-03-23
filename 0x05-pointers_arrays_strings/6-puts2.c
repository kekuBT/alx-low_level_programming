#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * _puts - function that prints a string
 *
 * @str: pointer to char
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i += 1;
	}
	_putchar('\n');
}
