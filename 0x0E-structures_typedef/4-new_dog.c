#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
int x;

x = 0;

while (s[x] != '\0')
{
x++;
}

return (x);
}

/**
 * *_strcpy - copies
 * including the terminating null byte (\0)
 * @dest: pointer
 * @src: string to be copied
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
int slen1, x;

slen1 = 0;

while (src[slen1] != '\0')
{
slen1++;
}

for (x = 0; x < slen1; x++)
{
dest[x] = src[x];
}
dest[x] = '\0';

return (dest);
}

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int slen1, slen2;

slen1 = _strlen(name);
slen2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (slen1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (slen2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}

