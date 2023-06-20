#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print time table
 * @n :git intager
 * Return: void
 */
void print_times_table(int n)
{
	int i, x, equal;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				equal = x * i;
				if (x != 0 && equal < 10)
					printf("   %d", equal);
				else if (x != 0 && equal < 100)
					printf("  %d", equal);
				else if (x != 0 && equal >= 100)
					printf(" %d", equal);
				else
					printf("%d", equal);

				if (x != n)
					printf(",");
			}
			printf("\n");
		}
	}
}
