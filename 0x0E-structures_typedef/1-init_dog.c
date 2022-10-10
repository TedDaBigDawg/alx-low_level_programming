#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 *
 * @d: a pointer to struct type dog
 * @name: a pointer to the name attribute
 * @age: a pointer to the age attribute
 * @owner: a pointer to the owner attribute
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
