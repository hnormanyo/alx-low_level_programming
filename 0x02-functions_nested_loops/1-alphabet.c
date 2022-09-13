# include "main.h"
/**
 * print_alphabet - function that prints lowercase alphabet
 *
 *Return: Alwayss return 0 (succesful)
 */
void print_alphabet(void)
{
	char lc = 'a';

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
