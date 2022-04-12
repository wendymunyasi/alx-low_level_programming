#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * init_dog - function that initializes a variable of type struct dog.
 * @d: pointer to struct dog.
 * @age: age of the dog.
 * @owner: pointer to owner of the dog.
 * @name: pointer to the name of the dog.
 *
 * Return: No return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
