#ifndef DOG_H
#define DOG_H

/**
 * struct dog - combination of data types below
 * @name: pointer to char type
 * @age: int data type
 * @owner: pointer to char type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
