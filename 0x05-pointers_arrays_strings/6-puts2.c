#include "main.h"
#include <string.h>

/**
 * puts2 -> puts function
 * @str: str parameter
 * Return: nothing
 */
void puts2(char *str)
{
	int len;

	len strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
