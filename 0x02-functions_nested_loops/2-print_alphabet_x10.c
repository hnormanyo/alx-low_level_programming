# include "main.h"

/**
 * print_alphabet - fuction to print 10x the alphabets
 *
 * Return: Always return 0
 */
void print_alphabet(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		for (c = 'a' ;c = 'z' ; c++);
		{
		_putchar(c);
		}
		_putchar('\n');

		i++;
	}
}



