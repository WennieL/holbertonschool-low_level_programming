#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - new type of dog
 * @name: name
 * @age: age
 * @owner:owenr
 * Return: NULL if the function fails
 */

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
	}
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->name = _strcpy(name);
	new_dog_ptr->age = age;
	new_dog_ptr->owner = _strcpy(owner);

	return (new_dog_ptr);
}
