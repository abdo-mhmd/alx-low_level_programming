#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: git intager
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
