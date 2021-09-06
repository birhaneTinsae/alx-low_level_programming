#include"main.h"
/**
 * _puts - get string length
 * @str: string argument
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + '0');
}
}
