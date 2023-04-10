#include "main.h"

/**
 * set_bit - sets val of bit to 1 at idx
 * @n: bit num
 * @index: index
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
