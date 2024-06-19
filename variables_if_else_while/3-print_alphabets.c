#include <stdio.h>

/**
 * main - Write a program that prints the alphabet
 * description: Write a program expect e q
 * Return: value 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
