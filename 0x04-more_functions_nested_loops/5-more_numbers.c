#include "main.h"

/**
* more_numbers -> this prints most numbers
*
*/
void more_numbers(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 15; y++)
{
_putchar(x + '0');
}
_putchar('\n');
}
}
