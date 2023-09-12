#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int time, h, m;

	for (time = 0; time < 1440; time++)
	{
		h = time / 60;
		m = time % 60;
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(':');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		_putchar('\n');
	}
}
