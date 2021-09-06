#include "main.h"
/**
 * swap_int - swap the arguments
 * @a pointer parameter
 * @b pointer parameter two
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
