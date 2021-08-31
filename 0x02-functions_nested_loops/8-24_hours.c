#include "main.h"
#include<stdlib.h>
/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
