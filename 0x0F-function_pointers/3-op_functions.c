#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - computes the sum of two integers a and b
 * @a: first integer to sum up
 * @b: second integer to sum up
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference of two integers a and b
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the product of two integers a and b
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - computes the ramainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
