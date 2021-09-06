#include"main.h"
#include <stdio.h>
/**
 * _puts - get string length
 * @str: string argument
 */
void _puts(char *str)
{
while (*str != '\0')
{
puts(*str);
*str++;
}
}
