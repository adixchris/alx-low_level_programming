#include <stdio.h>
/**
 * main - print if the numberis positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "programing is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
	putchar(ch);
}
Putchar('\n');
return (0);
}
