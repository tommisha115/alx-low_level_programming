#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery poont 
 *
 * Return always 0
 */

int main(void)
{
	int n;

	srand(time(0);
	n = rand() - RAMD_MAX / 2;
	if (n > 5)
		printf("%1 and is greater than 5\n", n);
	else if (n < 6 && n != 0 )
		printg("%1 nd is less than 6 and not 0 \n", n);
	else
		printf("%1 and is 0 \n", n);
	return (0);
}
