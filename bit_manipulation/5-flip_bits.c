#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             to transform one number into another
 * description: This function takes two unsigned long integers,
 * n and m, and calculates the number of bits that need to be flipped
 * in order to transform one number into another.
 * It iterates through each bit position of the numbers,
 * comparing their least significant bits (LSBs) using bitwise AND.
 * If the LSBs are different, it increments a counter to track the number
 * of flipped bits. After comparing the LSBs, both numbers are right-shifted
 * to move to the next bit position. The process continues until both numbers
 * become zero, indicating that all bits have been compared. Finally, the
 * function returns the total count of flipped bits.
 *
 * @n: first input number
 * @m: second input number
 *
 * Return: the numbers of bits need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	long int count;

	count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
