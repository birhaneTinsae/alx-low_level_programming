#include"main.h"
#include <stdio.h>
/**
 * puts2 - get string length
 * @str: string argument
 */
void puts2(char *str)
{
while (*str != '\0')
{
puts(str);
str+=2;
}

}
