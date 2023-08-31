#include "main.h"

/**
 * clear_bit - SeTs value of a given bit to 0
 * @n: Pointer to the number to change
 * @index: Index of the bit to clear
 *
 * Description: Function that sets Value of Bit to 0
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
