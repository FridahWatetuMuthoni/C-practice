#include <stdio.h>

/**
 * _strcpy-copies the src string to dest
 * @dest: where we are coping the string to
 * @src: the string that we are copying
 *
 * Return: returns a pointer to the dest string
 */

char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i]; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char str1[20] = "Hello";
    char str2[20];
    char *ptr;

    ptr = _strcpy(str2, str1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", ptr);

    return 0;
}
