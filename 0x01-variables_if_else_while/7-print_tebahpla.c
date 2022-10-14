#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print the alphabet in reverse order in lowercas.
 *
 * Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}

