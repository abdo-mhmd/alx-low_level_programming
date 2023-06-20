#include <stdio.h>
/**
 * main - main block
 * Description: first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int max = 50;
	int i;
	unsigned long last = 1, now = 2, next;

	printf("%lu, %lu, ", last, now);
	for (i = 3; i <= max; i++)
	{
		next = last + now;
		last = now;
		now = next;
		if (i == max)
			printf(" %lu", now);
		else
			printf(" %lu,", now);
	}
	printf("\n");
	return (0);
}
