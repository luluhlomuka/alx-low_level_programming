#include <stdio.h>

/** main - Swaps the value of two intergers
 * @a: first inter to be swaped
 * @b: second interger to be swaped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
