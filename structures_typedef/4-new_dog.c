#include <stdio.h>
#include <stdlib.h>
#include <string,h>
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

	while (
