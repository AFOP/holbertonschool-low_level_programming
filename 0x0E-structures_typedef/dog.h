#ifndef _dog_
#define _dog_

/**
 * struct dog - struct of the dog
 * @name: pointer to a char
 * @age: age of the dog
 * @owner: pointer to a char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
