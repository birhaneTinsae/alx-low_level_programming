#include "main.h"
/**
 * print_times_table - check is c is a character
 * @n: The number to check
 *
 * Return: On success 1.
 **/
void print_times_table(int n)
{
int i, j;
for (i = 0; i < n + 1; n++)
{
for (j = 0; j < n + 1; j++)
{
_putchar(n + '0');
if (j < n)
{
_putchar(',');
}
}

}
}