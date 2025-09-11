#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5];
	int *p;

	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	p = a + 1;
	*(p + 1) = 98;
	print_number(a[2]);
	_putchar('\n');
	return (0);
}
