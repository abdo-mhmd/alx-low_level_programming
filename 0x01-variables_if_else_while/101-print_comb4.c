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
	int x = 3;

	for (i = 0; i < 8; i++)
	{
		for (e = i + 1; e < 9; e++)
		{
			for (x = e + 1; x < 10; x++)
			{
				putchar(i + '0');
				putchar(e + '0');
				putchar(x + '0');
				if (i != 7 || e != 8 || x != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
