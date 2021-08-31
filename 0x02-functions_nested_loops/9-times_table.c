#include "main.h"

/**
 * times_table - writes the character c to stdout
 *  Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int i, j, res;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
res = (i * j);
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (res >= 10)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res < 10 && j != 0)
{
_putchar(' ');
_putchar((res % 10) + '0');
}
else
_putchar((res % 10) + '0');
_putchar('\n');
}
}
