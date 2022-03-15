#include <stdio.h>

/**
 * _isalpha - program that prints the alphabet in lowercase
 * @c: takes in a character
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
