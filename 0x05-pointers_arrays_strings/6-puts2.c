#include "main.h"
#include <string.h>

/**
 * puts2 -> puts2 function
 *
 * @str: str parameter
 */
void puts2(char *str)
{
	int cycle;

	while (*str != 0)
	{
		if (cycle % 2 == 0)
		{
			_putchar(*str);
		}
		cycle++;
		str++;
	}
	_putchar(10);
}
