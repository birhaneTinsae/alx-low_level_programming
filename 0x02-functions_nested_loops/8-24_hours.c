#include "main.h"
#include<stdlib.h>
/**
 * jack_bauer - writes the character c to stdout
 *  On error, -1 is returned, and errno is set appropriately.
 */
int jack_bauer(void)
{
int h, m;

for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
