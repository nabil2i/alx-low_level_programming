#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: pointer to struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->name)
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
			printf("Owner: (nil)\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
}
