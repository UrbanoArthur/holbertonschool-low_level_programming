#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - ooo
 * @d: ooo
 * @name: ooo
 * @age: ooo
 * @owner: ooo
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
