#include "main.h"
/**
* main - use maim function
* return 0 all the time
*/
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('0');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
