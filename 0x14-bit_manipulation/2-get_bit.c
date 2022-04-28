#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index
 * @n: number
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = 0;
	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
