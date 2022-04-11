#include "dog.h"
#include "stdlib.h"
int _strlen(char *s);
/**
 * _strlen - compute length of string
 * @s: string to compute the length of
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * copy_string - copy a string to a buffer
 * @src: string to copy
 * @dest: pointer to char to be copied to
 * Return: Nothing
 */
void *copy_string(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - create a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: poionter to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	nd->name = malloc(sizeof(char) * (len_name + 1));
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->owner = malloc(sizeof(char) * (len_owner + 1));
	if (nd->owner == NULL)
	{
		free(nd);
		free(nd->owner);
		return (NULL);
	}
	copy_string(nd->name, name);
	nd->age = age;
	copy_string(nd->owner, owner);
	return (nd);
}
