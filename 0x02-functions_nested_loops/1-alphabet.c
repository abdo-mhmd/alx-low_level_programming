#include "main.h"
/**
 * print_alphabet - Entery alphabit
 * description:
 * Return:0 or 1
 */
void print_alphabet(void)
{
	char ch = 'a';
	int i;

	for (i = ch; i <= 'z'; i++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
