#include "main.h"

/**
 * times_table - writes the character c to stdout
 *  Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int i, j, r;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = i * j;
_putchar( r+ '0');
}
_putchar('\n');
}
}
