#include"main.h"
/**
 * _puts - get string length
 * @str: string argument
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
