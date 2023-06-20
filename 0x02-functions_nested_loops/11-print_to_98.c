#include "main.h"
/**
 * print_to_98 - convert any num to 98
 * @n: get intager number
 * Return: void
 */
void print_to_98(int n)
{
	int max = 98;
	int start = n;

	if (n < max)
	{
		for (n = n; n <= max; n++)
		{
			if (n != start)
				printf(" %d", n);
			else
				printf("%d", n);

			if (n != max)
				printf(",");
		}
	}
	else if (n > max)
	{
		for (n = n; n >= max; n--)
		{
			if (n != start)
				printf(" %d", n);
			else
				printf("%d", n);
			if (n != max)
				printf(",");
		}
	}
	else
		_putchar(max + '0');
}
