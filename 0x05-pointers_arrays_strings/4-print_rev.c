#include"main.h"
#include <stdio.h>
int string_length(char *pointer)
{
int c = 0;
while( *(pointer + c) != '\0' )
{
c++;
}      
return c;
}
/**
 * print_rev - get string length
 * @str: string argument
 */
void print_rev(char *str)
{
int length, c;
char *begin, *end, temp;
length = string_length(str);
begin = str;
end = str;
for ( c = 0 ; c < ( length - 1 ) ; c++ )
end++;
for ( c = 0 ; c < length/2 ; c++ ) 
{        
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
puts(str);
}
