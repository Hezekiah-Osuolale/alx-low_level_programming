#include "main.h"
/*
 * main: print_putchar
 *
 * description: print_putchar
 *
 * return (0) success
 */

int main(void)
{
	char text[9] = "_putchar";
	int i ;
	for(i = 0; i < 8; i++;)
	{
		_putchar(text[i]);
	}
	
	_putchar('/n');
	retrun (0);
}	
