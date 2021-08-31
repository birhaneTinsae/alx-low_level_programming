#include "main.h"
#include<stdlib.h>
/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
{
lastDigit = (n * -1) % 10;
return (lastDigit * 10 + lastDigit);
}
return ((n % 10) * 10 + (n % 10));
}
