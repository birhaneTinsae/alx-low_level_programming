#include "main.h"

/**
 * print_alphabet_x10 - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
int a, j;
for (j = 0; j < 10; j++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
}
_putchar('\n');
}