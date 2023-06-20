#include <stdio.h>
/**
 * main -main block
 * Description:
 * Return:0
 */
int main(void)
{
	int max = 1024;
	int sum = 0;
	int i, equal;

	for (i = 1; i < max; i++)
	{
		equal = i * 3;
		if (equal < max)
		{
			sum += equal;
		}
		else
		{
			break;
		}
	}
	for (i = 1; i < max; i++)
	{
		equal = i * 5;
		if (equal < max)
		{
			sum += equal;
		}
		else
		{
			break;
		}
	}
	printf("%d", sum);
	return (0);
}
