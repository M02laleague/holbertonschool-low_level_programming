#include "main.h"
/**
* _abs - print an absolute value
* @n: is the number to use
* Return: Always 0.
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
