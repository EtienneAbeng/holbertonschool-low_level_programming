#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Function that prints a stuct dog
 *
 * @name: the name of dog
 * @owner: the name of owner
 * @age: the age of dog
 * @d: An elemnt is NULL print (nil) instead of this element 
 *
 * Return: Always 0.
 *
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;	
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else 
	{
		printf("NAME: %s\n", d->name);
	}

	if (d->age == 0)
	{
		printf("NAME: (nil)");
	}
	else
	{
		printf("NAME: %f\n", d->age);
	}

	if (d->owner == 0)
	{
		printf("NAME: (nil) ");
	}
	else 
	{
		printf("NAME: %s", d->owner);
	}

}
