#include "main.h"
/**
* _abs - print an absolute value
* @n: is the number to use
* Return: Always 0.
*/

int print_last_digit(int n)
{
	n = n % 10;
	if (n > 0)
	{
		_putchar(n + '0');
	}
	else
	{
		n = n * -1;
		_putchar(n + '0');
	}
	return (n);
}
