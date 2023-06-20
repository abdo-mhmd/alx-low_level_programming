#include "main.h"
/**
 * print_alphabet_x10 - print x10 alphabet a to z
 * Return : 0
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = ch; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
