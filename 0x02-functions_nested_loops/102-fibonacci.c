#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long n = 0, m = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = n + m;
		printf("%lu", sum);

		n = m;
		m = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
