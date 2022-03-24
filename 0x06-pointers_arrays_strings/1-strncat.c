#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 * _strncat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
