#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the address of memo to print
 * @size: size of memo to print
 */

void print_buffer(char *b, int size)
{
	int offset, byte_idx, char_idx;

	for (offset = 0; offset < size; offset += 10)
	{
		printf("%08x: ", offset);

		for (byte_idx = 0; byte_idx < 10; byte_idx++)
		{
			(offset + byte_idx < size) ? printf("%02x",
					b[offset + byte_idx]) : printf("  ");
			(byte_idx % 2) ? printf(" ") : 0;
		}

		for (char_idx = 0; char_idx < 10; char_idx++)
		{
			(offset + char_idx < size) ? printf("%c", (b[offset + char_idx] >= 32 &&
	b[offset + char_idx] <= 126) ? b[offset + char_idx] : '.') : 0;

		}

		printf("\n");
	}

	(size <= 0) ? printf("\n") : 0;
}
