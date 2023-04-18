#include <stdio.h>

/**
 * _strlen-calculates the length of a string
 * @str: the string
 * Return: returns the length of the string
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