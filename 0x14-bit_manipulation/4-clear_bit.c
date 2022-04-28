#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 if it worked and 0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int bit0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit0 = ~(1 << index);
	*n = *n & bit0;
	return (1);
}
