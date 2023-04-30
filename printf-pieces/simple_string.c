#include <stdio.h>

// Getting the length of a string

int _strlen(char *str)
{
    int len, i;

    len = 0;
    for (i = 0; str[i]; i++)
    {
        len++;
    }
    return (len);
}

void print(char *str)
{
    int str_len, i;

    str_len = _strlen(str);

    for (i = 0; i < str_len; i++)
    {
        putchar(str[i]);
    }
}

int main(void)
{
    char str[] = "Hello \"how?\" Wolrd!";
    print(str);
    return (0);
}