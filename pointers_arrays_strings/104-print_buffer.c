#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer in a specific format
 * @b: Pointer to buffer
 * @size: Number of bytes to print
 *
 * Description: Prints 10 bytes per line. Each line starts with
 * the position of the first byte in hexadecimal (8 digits),
 * followed by the hexadecimal content (2 chars per byte),
 * grouped in pairs and separated by spaces, then the ASCII
 * representation (printable characters or '.'), ending with \n.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}
		for (j = 0; j < 10 && (i + j) < size; j++)
		{
			if (b[i + j] >= 32 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
