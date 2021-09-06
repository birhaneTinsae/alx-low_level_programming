#include"main.h"
#include <stdio.h>
/**
 * string_length - get string length
 * @pointer: string argument
 */
int string_length(char *pointer)
{
int c = 0;
while (*(pointer + c) != '\0')
{
c++;
}
return (c);
}
/**
 * rev_string - get string length
 * @str: string argument
 */
void rev_string(char *str)
{
int length, c;
char *begin, *end, temp;
length = string_length(str);
begin = str;
end = str;
for (c = 0 ; c < (length - 1) ; c++)
end++;
for (c = 0 ; c < length / 2 ; c++)
{
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
}
