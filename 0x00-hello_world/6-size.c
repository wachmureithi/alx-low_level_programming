#include <stdio.h>
/**
*Entry point 
*
*Return: Always 0 (success)
*/

int main (void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char : %ld byte(s)\n", sizeof(a));
printf("Size of a int : %ld byte(s)\n", sizeof(b));
printf("size of a long int : %ld byte(s)\n", sizeof(c));
printf("Size of a long long int : %ld byte(s)\n", sizeof(d));
printf("Size of a float: %ld byte(s)\n", sizeof(e)); 
return(0); 
}
