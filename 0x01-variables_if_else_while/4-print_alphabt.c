#include <stdio.h>
/**
 * main - main block
 * Descripiton: print the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'c')
		{
			putchar (ch);
		}
		ch++;
	}
	putchar ('\n');
	return (0);
}
