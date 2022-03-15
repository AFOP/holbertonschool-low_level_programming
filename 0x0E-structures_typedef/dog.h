#ifndef _dog_
#define _dog_

/**
 * dog_t - new struct of the dog
 */
typedef struct dog dog_t;

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
dog_t *new_dog(char *name, float age, char *owner);

#endif
