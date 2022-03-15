#include "main.h"
/**
* main - entry block
* @void: no argument
* Return: 0
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
