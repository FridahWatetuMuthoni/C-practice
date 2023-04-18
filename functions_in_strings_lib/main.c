#include "main.h"

int main(void)
{
    char str1[90] = "Hello ";
    char str2[] = "Word!";

    char *ptr = _strcat(str1, str2);
    printf("%s\n", ptr);
    return (0);
}