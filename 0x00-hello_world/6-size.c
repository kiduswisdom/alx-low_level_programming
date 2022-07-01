#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %d 1 byte(1)\n", sizeof(char));
	printf("size of a int: %d 4 byte(4)\n", sizeof(int));
	printf("size of a long int: %d 8 byte(4)\n", sizeof(long));
	printf("size of a long long int: %d 8 byte(8)\n", sizeof(double));
	printf("size of a float: %d 4 byte(4)\n", sizeof(float));
	return (0);
}
