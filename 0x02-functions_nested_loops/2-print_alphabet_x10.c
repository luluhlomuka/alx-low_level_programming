#include "main.h"
/**
* main -print alphabet ×10
* Return:0 always
*/
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
	return (0);
} 
