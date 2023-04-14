#include <stdio.h>

/*
When you create an array, the array variable can be used as a pointer to the start of the array in memory.
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

int _strlen_2(char *str)
{
    int i, len;

    i = 0;
    len = 0;
    while (*str)
    {
        len++;
        str++;
    }
    return (len);
}

void skip(char *msg)
{
    puts(msg + 6);
}

int main(void)
{
    char *str = "Hello World";
    int len_str = _strlen_2(str);

    char string[] = "Hello World";
    int len_string = _strlen_2(string);

    printf("Using a pointer to create a string length: %d\n", len_str);
    printf("Using an array to create a string: %d\n", len_string);

    char *string_2 = "Don't call me";
    skip(string_2);
    return (0);
}