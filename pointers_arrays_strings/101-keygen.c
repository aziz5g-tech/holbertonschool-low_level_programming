#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	while (sum < 2772)
	{
		c = rand() % 94 + 33; /* printable ASCII range: 33 to 126 */
		if (sum + c > 2772)
			c = 2772 - sum;
		sum += c;
		putchar(c);
	}

	return (0);
}
