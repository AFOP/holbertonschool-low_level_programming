#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: pointer of name char
 * @age: float the age
 * @owner: pointer of owner
 * Return: The new dog or NULL in case fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	while (name[i] != '\0')
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->name[i] = '\0';
	new_dog->age = age;
	while (owner[j] != '\0')
	{
		new_dog->owner[j] = owner[j];
		j++;
	}
	new_dog->owner[j] = '\0';
	return (new_dog);
}
