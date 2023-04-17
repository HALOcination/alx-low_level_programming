#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - dog struct
  * @name: dog's name
  * @age: dog's age
  * @owner: owner's name
  *
  * description
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif