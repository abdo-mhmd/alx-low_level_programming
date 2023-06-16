#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description:last digit of the number stored in the variable n
 * Return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	Last = n % 10;
	if (Last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, Last);
	else if (Last < 6 && Last != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, Last);
	else
		printf("Last digit of %i is %i and is 0\n", n, Last);
	return (0);
}
