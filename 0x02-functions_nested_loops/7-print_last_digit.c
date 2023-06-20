#include "main.h"
/**
 * print_last_digit - print last digit
 * @num:get num value
 * Return: num value
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (lastDigit < 0)
		lastDigit = lastDigit * -1;
	putchar(lastDigit + '0');
	return (lastDigit);
}
