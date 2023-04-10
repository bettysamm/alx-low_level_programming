#include "main.h"
/**
 *get_endianness - this function checks foe endianness
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int ans = 1;

	ans = *(char *)(&ans) == 1;
	return (ans);
}
