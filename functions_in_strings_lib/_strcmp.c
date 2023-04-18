#include "main.h"

/**
 * _strcmp- the function compares to strings are see if they are the same
 * @str1: the first string
 * @str2: the second string
 *
 * Return: returns 0 if the strings are the same else returns 1
 */

int _strcmp(char *str1, char *str2)
{
    int i, flag = 0;

    for (i = 0; str1[i] || str2[i]; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        return (1);

    return (0);
}