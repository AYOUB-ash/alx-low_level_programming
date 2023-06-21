#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 0, m = 1, sum;
	float to_sum;
	while(1)
	{
		sum = n + m;
		if(sum > 4000000)
			Break;
		if((sum % 2) == 0)
			to_sum += sum;
		n = m;
		m = sum;
	}
	printf("%f\n",to_sum);

	return (0);
}
