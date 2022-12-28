#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Details of a dog.
 * @name: Pointer to dog's name.
 * @age: Age of dog.
 * @owner: Pointer to owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
