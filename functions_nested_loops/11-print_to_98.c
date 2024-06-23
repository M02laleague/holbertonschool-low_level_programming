#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print  base 98
* @n: is the parameter
* Return: Always 0.
*/

void print_to_98(int n)
{
	if (n < 0)
	{
		for (; n < 0; ++n)
		{
			printf("%d, ", n);
		}
		for (; n <= 98; ++n)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	} else if (n > 98)
	{
		for (; n >= 98; --n)
		{
			if (n > 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	} else
	{
		for (; n <= 98; ++n)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	printf("\n");
}
