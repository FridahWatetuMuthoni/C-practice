#include <stdio.h>

/**
 * _strcat- the function concatenates two strings
 * @dest: where we are copying the string to
 * @str: where we are getting the string from
 *
 * Return: returns a pointer to dest
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

char *_strcat(char *dest, char *src)
{
    int i, dest_len, index;

    dest_len = _strlen(dest);

    index = dest_len;
    dest[index] = ' ';
    index = index + 1;
    for (i = 0; dest[i] && src[i]; i++)
    {
        dest[index] = src[i];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}

int main(void)
{
    char str1[50] = "Hello";
    char str2[] = "Word!";

    char *ptr = _strcat(str1, str2);
    printf("%s\n", ptr);
    return (0);
}
