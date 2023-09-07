#include<stdio.h>

/**
 * main - THe program entry point
 * Return: 0 if the program is successful
 */
int main(void)
{
	char cr;
	int it;
	long int lgit;
	long long int lglgit;
	float ft;

	printf("Size of a char: %d byte(s)\n", sizeof(cr));
	printf("Size of an int: %d byte(s)\n", sizeof(it));
	printf("Size of a long int: %d byte(s)\n", sizeof(lgit));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lglgit));
	printf("Size of a float: %d byte(s)\n", sizeof(ft));
	return (0);
}
