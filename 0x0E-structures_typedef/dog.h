#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct type dog
 * @name: character pointer name
 * @age: floating point age
 * @owner: character pointer name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* ifdef DOG_H */
