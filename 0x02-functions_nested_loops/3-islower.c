#include "main.h"
/**
 * _islower - print is lower point
 * @c: get intager
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
