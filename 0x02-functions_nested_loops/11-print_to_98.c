#include "main.h"
/**
 * print_to_98 - writes the character c to stdout
 * @n: The first operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
{
_putchar(n + '0');
if (n < 98)
{
_putchar(',');   
}
}
}
else
{
for (n = n; n > 98; n--)
{
_putchar(n + '0');    
if (n > 98)
{
_putchar(',');   
}
}	
}
}
