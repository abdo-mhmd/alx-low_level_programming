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
	int i;

	for (i = 1; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
