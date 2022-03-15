#include <stdio.h>

/**
 * _isalpha - program that prints the alphabet in lowercase, followed by a new line
 * @c - You can only use the putchar
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c  <= 'z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
