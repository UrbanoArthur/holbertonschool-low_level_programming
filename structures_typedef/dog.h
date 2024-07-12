#ifndef DOG
#define DOG
/**
 * struct dog - ooo
 * @name: ooo
 * @age: ooo
 * @owner: ooo
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
