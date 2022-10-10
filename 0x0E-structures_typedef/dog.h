#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct that stores some information of a dog
 * @name: name to initialize
 * @age: age to intialize
 * @owner: owner to initialize
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_d - Typedef for struck dog
 */
typedef struct dog dog_d;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
