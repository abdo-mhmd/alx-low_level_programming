#include <stdio.h>
/**
 * main - main block
 * Descripiton: prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar (C);
		C++;
	}
	putchar ('\n');
	return (0);
}