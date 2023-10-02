#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 * Return: The converted sting as an integer
 */
int _atoi(char *s)
{
	int i = 0, printed = 0, ncount = 0;
	unsigned int ans = 0;

	while (s[i])
	{
		if (s[i] > 47 && s[i] < 58)
		{
			printed = 1;
			if (!ans)
				ans = s[i] - '0';
			else
				ans = ans * 10 + (s[i] - '0');
		}
		else
		{
			if (printed)
				break;
			if (s[i] == '-')
				ncount++;
		}
		i++;
	}
	if (ncount % 2 == 1)
		return (ans * -1);
	return (ans);
}
