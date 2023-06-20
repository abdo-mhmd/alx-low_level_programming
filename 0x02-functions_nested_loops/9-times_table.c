#include "main.h"
#include <stdio.h>
/**
 * times_table - print times tables from 1 to 9
 * Return: void
 */
void times_table(void)
{
	int num = 0;
	int pls = 0;
	int equal = 0;

	for (num = 0; num < 10; num++)
	{
		for (pls = 0; pls < 10; pls++)
		{
			equal = num * pls;
			if (pls != 0)
			{
				printf("  ");
			}
			printf("%d", equal);
			if (pls != 9)
				printf(",");
		}
		printf("\n");
	}
}
