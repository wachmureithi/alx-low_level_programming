#include "main.h"
/**
 * prints the alphabet, in lowercase, followed by a new line
 * Return: returns 0 if successful
 */

void  print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
