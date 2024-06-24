#include "main.h"

/**
* _isupper - This function verify if is upper.
* @c: the parameter char to comparate.
* Return: Always 0.
*/
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
