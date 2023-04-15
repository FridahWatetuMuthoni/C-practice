#include <stdio.h>

int _strlen(char *str)
{
    int len, i;

    len = 0;
    for (i = 0; str[i]; i++)
        len++;
    return (len);
}

void reverse_string(char *str)
{
    int i, j, size;
    size = _strlen(str);

    j = 0;
    for (i = size - 1; i > j; i--)
    {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
    }
}
int main(void)
{
    // A variable that points to a string literal can’t be used to change the contents of the string:
    char *str = "JQK";
    // reverse_string(str);

    // But if you create an array from a string literal, then you can  modify it:
    char string[] = "JQK";
    reverse_string(string);

    printf("String declared as an array: %s\n", string);
    printf("String declared as a pointer: %s\n", str);

    return (0);
}