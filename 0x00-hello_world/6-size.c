#include <stdio.h>

/**
 * main - use main function
 *
 * Return: 0 all the time
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}