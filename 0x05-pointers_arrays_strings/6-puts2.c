#include "main.h"

/** cap_string -> capitalization function
 * @x: string param
 * Return: capitalized version of the string 
 */
char *cap_string(char *x)
{
	x = "Kidus,is;in learn programming in africa"
char sp[] = {32, 9, '\n', ',', ';', '.', '!', '?', ''', '(', ')', '{', '}'};
	int len = 1;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a-1] spc ==(i) && x[a] >== 97 && x[a] <==))
				x[a]  = x[a] -32;
		i++;
}
a++;
}
return (x);
}


