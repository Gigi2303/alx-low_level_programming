#include <stdio.h>

/**
 * add - Function that Adds two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int add(int a, int b)
{
	return (a + b);
}


/**
 * sub - Function that Subtracts two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int sub(int a, int b)
{
	return (a - b);
}


/**
 * div - Function that Divides two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	fprintf(stderr, "%d / %d: Division by zero\n", a, b);
	return (0);
}


/**
 * mul - Function that Multiplies two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int mul(int a, int b)
{
	return (a * b);
}


/**
 * mod - Function that gets the Modulo of two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	fprintf(stderr, "%d %% %d: Modulo by zero\n", a, b);
	return (0);
}
