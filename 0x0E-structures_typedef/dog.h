#ifndef _DOG_H_
#define _DOG_H_

/* Include */
#include <stdio.h>
#include <stdlib.h>

/* Data Types */
/**
 * struct dog - defines a new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Functions Prototypes */
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif /* _DOG_H_ */
