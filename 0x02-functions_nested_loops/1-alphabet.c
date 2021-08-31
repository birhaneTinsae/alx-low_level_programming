#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet()
{
int a ;
for (a = 'a'; a<='z'; a++)
{
_putchar(a);
}
_putchar('\n');
}