#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %d byte(1)\n", sizeof(char));
	printf("size of a int: %d byte(4)\n", sizeof(int));
	printf("size of a long int: %d byte(4)\n", sizeof(long));
	printf("size of a long long int: %d byte(8)\n", sizeof(double));
	printf("size of a float: %d byte(4)\n", sizeof(float));
	return (0);
}
