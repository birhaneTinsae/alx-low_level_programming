#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit < 6 && lastDigit != 0)
{
printf("%s %d %s %d %s %d %s %d\n","Last digit of", n, "is", lastDigit, "and is less than", 6, "and not", 0);
}
else if (lastDigit > 5)
{
printf("%s %d %s %d %s %d\n","Last digit of", n, "is",
	   	lastDigit, "and is greater than", 5);
}
else if (lastDigit == 0)
{
printf("%s %d %s %d %s %d\n","Last digit of", n, "is",
	       	lastDigit, "and is", 0);
}
return (0);
}
