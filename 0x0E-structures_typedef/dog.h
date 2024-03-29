#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - A dog poppy structure
 * @name: The dog structure's name
 * @age: The dog structure's age.
 * @owner: The dog structure's owner.
 *
 * Description: A Poopy dog structure that has a name, an age, and an owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
