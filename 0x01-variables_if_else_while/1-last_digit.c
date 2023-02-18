#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit number generated randomly
 * whether the number is greater than 5, less than 6, or 0.
 *
 * Retrun: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 15) > 5)
		printf("last digit of %d and is greater than 5\n", n % 15);
	else if ((n % 15) < 6 && (n % 15) != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n % 15);
	else
		printf("last digit of %d and is 0\n", n % 15);
	return (0);
}
