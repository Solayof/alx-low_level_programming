#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * slen - find length of string
 * @s: string
 * Return: length
 */
int slen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	return (i);
}
/**
 * scpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *scpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= slen(src); i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t)); /* validate if dog1 initiated correctly */
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	/* make copies of struct members and validate, else free on error */
	/* set values of struct members to copies of arguments or set to NULL */
	if (name != NULL)
	{
		dog1->name = malloc(slen(name) + 1);
		if (dog1->name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		scpy(dog1->name, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		dog1->owner = malloc(slen(owner) + 1);
		if (dog1->owner == NULL)
		{
			free(copy_of_name);
			free(dog1);
			return (NULL);
		}
		scpy(dog1->owner, owner);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
