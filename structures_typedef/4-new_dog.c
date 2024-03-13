#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - Copies a string pointed to by src
 * @dest: The buffer storing the string copy
 * @src: The source string
 *
 * Return: The pointer to dest
 */

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

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: The new_dog
 */

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

	new_dog_ptr->name = _strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	new_dog_ptr->owner = _strcpy(new_dog_ptr->owner, owner);

	return (new_dog_ptr);
}
