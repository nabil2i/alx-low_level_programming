#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped
 * to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int flip, count;

	count = 0;
	flip = n ^ m;
	while (flip)
	{
		count = count + (flip & 1);
		flip = flip >> 1;
	}
	return (count);
}
