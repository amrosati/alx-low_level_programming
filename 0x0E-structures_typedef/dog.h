#ifndef _DOG_H_
#define _DOG_H_

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

/* Functions Prototypes */
void init_dog(struct dog, char *, float, char *);

#endif /* _DOG_H_ */
