#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int b = 0;

	while (b < n && n > 0)
	{
		_putchar('_');
		b++;
	}
	_putchar('\n');
}
