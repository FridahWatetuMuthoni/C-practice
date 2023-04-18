#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - creates the dog's information
 * @name: name of the dog
 * @age:age of the dog
 * @owner: owner of the dog
 *
 * Description:the struct creates the info on the dog
 */

struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

// Fuction prototypes
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}

/**
 * _strlen-calculates the length of a string
 * @str: the string
 *
 * Return: returns the size of the string
 */

int _strlen(char *str)
{
    int i, len;

    len = 0;
    for (i = 0; str[i]; i++)
    {
        len++;
    }
    return (len);
}

/**
 * _strcpy- copies one string to another string
 * @dest: where we are coping the string to
 * @src: the source of the string
 *
 * Return: returns a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    for (i = 0; src[i]; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    return (dest);
}

/**
 * new_dog - the function creates a new dog
 * @name:the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: returns a pointer to the new created dog else null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *ptr;
    int name_len;
    int owner_len;

    if (name == NULL || age < 0 || owner == NULL)
        return (NULL);

    ptr = malloc(sizeof(dog_t));
    if (ptr == NULL)
        return (NULL);

    name_len = _strlen(name) + 1;
    ptr->name = malloc(sizeof(char) * name_len);
    if (ptr->name == NULL)
    {
        free(ptr);
        return (NULL);
    }
    owner_len = _strlen(owner) + 1;
    ptr->owner = malloc(sizeof(char) * owner_len);
    if (ptr->owner == NULL)
    {
        free(ptr->name);
        free(ptr);
        return (NULL);
    }
    ptr->age = age;
    ptr->name = _strcpy(ptr->name, name);
    ptr->owner = _strcpy(ptr->owner, owner);

    return (ptr);
}

/**
 * free_dog- a function that frees the created dog
 * @d: pointer to the created dog
 *
 * Return: doesnt return anything
 */

void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}