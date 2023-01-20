#include "dog.h"

/**
 * print_dog - prints a stuct dog pointer members
 * @d: struct dog pointer
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	(d->name == NULL)
	?
		printf("(nil)\n")
	:
		printf("%s\n", d->name);

	printf("Age: ");
	(d->age <= 0)
	?
		printf("(nil)\n")
	:
		printf("%f\n", d->age);

	printf("Owner: ");
	(d->owner == NULL)
	?
		printf("(nil)\n")
	:
		printf("%s\n", d->owner);
}
