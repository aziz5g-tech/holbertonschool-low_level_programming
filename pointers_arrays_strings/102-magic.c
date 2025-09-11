#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 *
 * Description: This function handles negative numbers,
 * avoids using long, arrays, pointers, or hard-coded values.
 */
void print_number(int n)
{
	int digit;

	if (n < 0)
	{
		_putchar('-');
		if (n / 10 != 0)
			print_number(-(n / 10));
		digit = -(n % 10);
	}
	else
	{
		if (n / 10 != 0)
			print_number(n / 10);
		digit = n % 10;
	}

	_putchar(digit + '0');
}
