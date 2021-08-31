#include "main.h"

/**
 * _abs - writes the character c to stdout
 * @n: The character to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar(i * j + '0');
}
}
}
