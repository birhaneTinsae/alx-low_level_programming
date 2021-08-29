#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i=0;
do{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
i++;
}while(i<10);

/*for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i==9)
{
putchar('$');
}
else
{
putchar(',');
putchar(' ');
}
}*/
putchar('$');
return (0);
}
