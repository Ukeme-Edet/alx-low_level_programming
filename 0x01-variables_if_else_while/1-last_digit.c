#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - The program entry point
 * Return: 0 if the program is successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("Last digit of %d is %d and is %s than %d and %s 0", n, n % 10, &equality, comp, &state);
	return (0);
}
