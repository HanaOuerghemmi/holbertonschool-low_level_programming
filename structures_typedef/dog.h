#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - this struct define a dog
 * @name: dog name type char*
 * @age: dog age type float*
 * @owner: the owner type char*
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - this struct define a dog
 * @name: dog name type char*
 * @age: dog age type float*
 * @owner: the owner type char*
 */

typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;
	/*declaration with the  new type dog_t*/
dog_t *new_dog(char *name, float age, char *owner);


#endif
