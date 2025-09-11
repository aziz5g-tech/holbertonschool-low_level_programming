#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result or 0 if result can't fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l, sum, carry = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i > size_r - 1 || j > size_r - 1)
		return (0);

	k = i - 1;
	l = j - 1;
	r[size_r - 1] = '\0';
	size_r--;

	while (k >= 0 || l >= 0 || carry)
	{
		if (size_r == 0)
			return (0);

		sum = carry;
		if (k >= 0)
			sum += n1[k--] - '0';
		if (l >= 0)
			sum += n2[l--] - '0';

		r[--size_r] = (sum % 10) + '0';
		carry = sum / 10;
	}

	return (&r[size_r]);
}
