#include "main.h"
/**
 * _strlen - get string length
 * @s: string argument
 */
int _strlen(char *s)
{
char *p=s;
while (*p != '\0')
{
p++;
}
return (p - s);
}
