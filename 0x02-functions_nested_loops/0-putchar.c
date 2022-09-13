#include <stdio.h>

/**
* -putchar-- print _putchar
*  _putchar the text to print
*
* Return: On success 0
* Description: This program prints _putchar
*/
int main(void)
{
char *c ="_putchar";
while (*c)
{
_putchar(*c);
c++;
}
_putchar('\n');
return (0);
}
