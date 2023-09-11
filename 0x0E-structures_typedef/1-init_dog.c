#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initializes a variablr of type struct dog
 * @d: struct
 * @name: dogs name
 * @age: dogs age
 * @owner: his owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->owner = owner;
	d->name = name;
}
