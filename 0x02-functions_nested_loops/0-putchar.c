#include "main.h"
/**
 * main - Entry point
 * Description:
 * Return: 0
 */
int main(void)
{
	int i, n;
	char chr[] = "_putchar";
	n = sizeof(chr);
	for (i = 0; i < n; i++)
	{
		_putchar(chr[i]);
	}
	_putchar('\n');	
	return (0);
}	
