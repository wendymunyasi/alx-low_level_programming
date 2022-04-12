#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * new_dog - function that creates a new dog.
 * @age: age of the dog.
 * @owner: pointer to owner of the dog.
 * @name: pointer to the name of the dog.
 *
 * You have to store a copy of name and owner.
 * Return NULL if the function fails.
 *
 * Return: New dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	/* If the function fails return NULL*/
	if (new_dog == NULL)
		return (NULL);
	/* Initialize length of owner and name to 0 */
	nameLen = ownerLen = 0;
	/* Loop from first index to last index to get the name of dog and owner*/
	for (nameLen = 0; name[nameLen]; nameLen++)
	;
	for (ownerLen = 0; owner[ownerLen]; ownerLen++)
	;
	new_dog->name = malloc(nameLen * sizeof(new_dog->name));
	/* If there is no name free new_dog and return NULL*/
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	/* Store a copy of name of dog*/
	for (i = 0; i <= nameLen; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	/* Allocate some memory to owner of dog */
	new_dog->owner = malloc(ownerLen * sizeof(new_dog->owner));
	/* If there is no owner free new_dog and return NULL */
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	/* Store a copy of owner of dog*/
	for (i = 0; i <= ownerLen; i++)
		new_dog->owner[i] = owner[i];
	/* Return the new dog*/
	return (new_dog);
}
