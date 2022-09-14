#include <stdio.h>
#include <stdliv.h>
#include <time.h>
/**
* main - returns alphabets both in lower and uppercase
* Returns: o (successful)
*/
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
		putchar('\n');
		return (0);
}
