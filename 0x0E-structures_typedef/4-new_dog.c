#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *N_dog;
	int i, name_len, owner_len;

	N_dog = malloc(sizeof(dog_t));

	if (N_dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	name_len = i;

	N_dog->name = malloc((name_len + 1) * sizeof(char));
	if (N_dog->name == NULL)
	{
		free(N_dog->name);
		return (NULL);
	}

	else
	{
		for (i = 0; name[i]; i++)
			N_dog->name[i] = name[i];
		N_dog->name[i] = '\0';
	}

	for (i = 0; owner[i]; i++)
		;
	owner_len = i;
	N_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (N_dog->owner == NULL)
	{
		free(N_dog->owner);
		free(N_dog->name);
		return (NULL);
	}

	else
	{
		for (i = 0; owner[i]; i++)
			N_dog->owner[i] = owner[i];
		N_dog->owner[i] = '\0';
	}
	N_dog->age = age;

	return (N_dog);
}
