#include <stdio.h>
/**
 * task two
 * a program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
