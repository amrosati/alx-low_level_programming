#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to the new dog (on success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name == NULL)
		d->name = NULL;
	else
	{
		d->name = malloc(sizeof(char) * 100);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		d->name = strcpy(d->name, name);
	}

	d->age = age;

	if (owner == NULL)
		d->owner = NULL;
	else
	{
		d->owner = malloc(sizeof(char) * 100);
		if (d->owner == NULL)
		{
			if (d->name != NULL)
				free(d->name);

			free(d);
			return (NULL);
		}

		d->owner = strcpy(d->owner, owner);
	}

	return (d);
}
