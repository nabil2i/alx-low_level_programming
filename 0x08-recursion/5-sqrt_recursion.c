#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to computer the square root of
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(0, n));

}
/**
 * _sqrt - compute the square root
 * @n: number
 * @a: counter
 * Return: square root
 */
int _sqrt(int a, int n)
{
	if (a * a  == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (_sqrt(a + 1, n));
}
