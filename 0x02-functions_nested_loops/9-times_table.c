#include "main.h"
/**
 * times_table - print times tables from 1 to 9
 * Return: void
 */
void times_table(void)
{
	int num = 0;
	int pls = 0;
	int equal = 0;

	while (num < 10)
	{
		while (pls < 10)
		{
			equal = num * pls;
			if (pls != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(equals + '0');
			if (pls != 9)
				_putchar(',');
			pls++;
		}
		_putchar('\n');
		num++;
	}
}
