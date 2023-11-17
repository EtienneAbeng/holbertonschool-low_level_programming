#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type descripting a dog
 *
 * @name: The name of the dog
 * @age: The age of the end
 * @owner: The owner of the dog
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
}dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
