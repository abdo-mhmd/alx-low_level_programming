#include <stdio.h>
/**
 * main - main block
 * Description:
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int e = 1;

	for (i = 0; i < 9; i++)
	{
		for (e = i + 1; e < 10; e++)
		{
			putchar(i + '0');
			putchar(e + '0');
			if (i != 8 || e != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
