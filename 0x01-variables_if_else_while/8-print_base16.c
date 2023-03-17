#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int num;
char alphabet;

num = 0;
while (num < 10)
{
putchar('0' + num);
num++;
}
alphabet = 'a';
while (alphabet <= 'f')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
