#include <stdio.h>
/**
 * main - main block
 * Description: first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int max = 50;
	int i, last = 1, now = 2, next;

	for (i = 3; i <= max; i++)
	{
		next = last + now;
		last = now;
		now = next;
		if (i == max)
			printf("%d",now);
		else
			printf("%d ,", now);
	}
	return (0);
}
