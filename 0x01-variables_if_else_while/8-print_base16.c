#include <stdio.h>
/**
 * main - main block
 * Description:
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char e = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (e = 'a'; e <= 'f'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
