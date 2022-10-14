#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entery poont
 *
 * Return always 0
=======
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
>>>>>>> 50cd38f6c3c97ccd606fe86ad7237d9a0827837b
 */
int main(void)
{
	int n;
	int m;

<<<<<<< HEAD
	srand(time(0);
	n = rand() - RAMD_MAX / 2;
	if (n > 5)
		printf("%1 and is greater than 5\n", n);
	else if (n < 6 && n != 0)
		printg("%1 nd is less than 6 and not 0 \n", n);
=======
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
>>>>>>> 50cd38f6c3c97ccd606fe86ad7237d9a0827837b
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, m);

	return (0);
}
