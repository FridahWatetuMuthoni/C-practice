#include "main.h"

/**
 * strchr: finds the first instance of a charater in a string and
 * check whether a string contains the required charaters
 * @str: the string we are searching ch in
 * @ch: the charater we are searching
 */

char *_strchr(const char *str, char ch)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == ch)
        {
            return (str[i]);
        }
        i++;
    }
    return (0);
}