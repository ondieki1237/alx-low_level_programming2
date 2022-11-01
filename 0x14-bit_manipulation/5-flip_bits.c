#include "main.h"
#include <stdio.h>
/**
* flip_bit - returns a number of bits you would need
* @n: number
* @index: index within binary number
* Return: returns the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int diff_bits = 0;
unsigned long int difference;
difference = n ^ m;
do {
diff_bits += (difference & 1);
difference >>= 1;
} while
(difference > 0);

return (diff_bits);
}
