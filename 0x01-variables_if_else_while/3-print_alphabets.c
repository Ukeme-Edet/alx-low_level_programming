#include <stdio.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful
 */
int main(void)
{
	for (int i = 97; i < 122; i++)
		putchar(i);
	for (i = 65; i < 90; i++)
		putchar(i);
	putchar(10);
	return (0);
}
