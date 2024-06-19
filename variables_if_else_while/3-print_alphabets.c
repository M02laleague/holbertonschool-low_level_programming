#include <stdio.h>

/**
 * main - Write a program that prints the alphabet
 * description: Write a program expect e q
 * Return: value 0
 */
int main(void)
{
char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
