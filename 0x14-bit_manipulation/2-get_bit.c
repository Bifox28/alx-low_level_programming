#include "main.h"

/**
 * get_bit - returns value of a Bit at index in decimal number
 * @n: number to search
 * @index: index of the bit
 * Description: Function that return value of a Bit at Index in Dec numb
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
