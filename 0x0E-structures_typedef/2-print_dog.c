#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to struct dog.
 *
 * You are allowed to use the standard library.
 * If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil)).
 * If d is NULL print nothing.
 *
 * Return: No return.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
