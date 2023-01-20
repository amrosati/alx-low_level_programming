#include "dog.h"

/**
 * init_dog - initializes a struct dog type pointer with given values
 * @d: dog pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
