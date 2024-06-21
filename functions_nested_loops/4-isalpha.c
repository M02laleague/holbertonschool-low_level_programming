#include "main.h"
/**
 *  _isalpha - print if c is lower or is upper
 *  @c: is the parameter of the function
 *  Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
