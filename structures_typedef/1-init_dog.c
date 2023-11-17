#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initialize a variable of type struct dog
 *
 * @name: the name of dog
 * @age: the age of dog
 * @owner: tne name of owner
 * @d: the pointer that point to elements
 * return (0)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
