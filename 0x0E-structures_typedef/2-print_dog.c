#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the attributes and values of a struct dog
 * @d: A pinter to the dog(struct dog) to be printed
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: ");
	d->age ? printf("%f\n", d->age) : printf("(nil)\n");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
