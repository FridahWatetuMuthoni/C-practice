#include "main.h"

/**
 * _strstr: used to search a given substring in the main string
 * @haystack: the string we are searching the substring  in
 * @needle: the substring we are searching in haystack
 *
 * Return: returns the pointer to the first occurrence of the given substring in the main string.
 */

char *_strstr(char *haystack, char *needle)
{
    int i, j;
    char *start;

    for (i = 0; haystack[i]; i++)
    {
        for (j = 0; needle[j]; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
        }

        if (needle[j] == '\0')
        {
            start = &haystack[i];
            return (start);
        }
    }
    return (NULL);
}

int main()
{
    char main_string[50] = "Hello, how's the weather today?";
    char search_string[30] = "weather";

    char *found_string = _strstr(main_string, search_string);

    if (found_string == NULL)
    {
        printf("Substring not found in the string\n");
    }
    else
    {
        printf("Substring located -> %s\n", found_string);
    }

    return 0;
}
