#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - this assigns a new number to the variable n
 *		each time it is executed
 * Description: The code will print whether the
 *		random number is positive or negative.
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d is positive\n", n);

	else if (n == 0)
	printf("%d is zero\n", n);

	else
	printf("%d is negative\n", n);

	return (0);
}
