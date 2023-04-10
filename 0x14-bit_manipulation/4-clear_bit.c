#include "main.h"

/**
 * clear_bit - sets val of bit to 0 at idx
 * @index: the idx
 * @n: pointer to bit
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}
