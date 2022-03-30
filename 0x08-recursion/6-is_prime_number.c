#include "main.h"

/**
 * is_prime_number - returns 1 if number is prime number
 * and 0 otherwise
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
/**
 * prime_number - calcultes of n is prime number
 * @n: number
 * @a: counter
 * Return: 1 or 0
 */
int prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (prime_number(n, a - 1));
}
