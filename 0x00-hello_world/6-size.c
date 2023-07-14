#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 (success)
 */

int main(void)
{
	printf("Size of a char: %ln byte(s)\n", sizeof(char));
	printf("Size of an int: %ln byte(s)\n", sizeof(int));
	printf("Size of a long int: %ln byte(s)\n", sizeof(long int));
	printf("Size of a long long: %ln byte(s)\n", sizeof(long long));
	printf("Size of a float: %ln byte(s)\n", sizeof(float));
	return (0);
}
