#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int j, i = 10;

	while (i--)
	{
		j = 0;
		while (j++ < 15)
		{
			if (j > 9)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
