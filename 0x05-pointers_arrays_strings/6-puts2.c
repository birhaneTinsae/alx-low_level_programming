#include"main.h"
#include <stdio.h>
/**
 * _strlen - get string length
 * @s: string argument
 *
 * Return: string size
 */
int _strlen(char *s)
{
char *p = s;
while (*p != '\0')
{
p++;
}
return (p - s);
}
/**
 * puts2 - get string length
 * @str: string argument
 */
void puts2(char *str)
{
int i;
for (i = 0; i < _strlen(str); i+2)
{
puts(str[i]);
}
}
