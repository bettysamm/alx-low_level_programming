#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int to search
 * @index: index to return
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_per_byto = 8;
	unsigned int bits_in_longo = sizeof(n) * bit_per_byto;

	if (index >= bits_in_longo)
		return (-1);

	return ((n >> index) & 1);
}
