#include <stdio.h>

/**
 * _strcmp: compares if two strings are the same
 * @str1: the first string
 * @str2: the second string
 * 
 * Return: the function returns 0 if the two strings are the same
 * if str1 is greater than str2 it returns a positive -> 1
 * if str2 if greater than str1 it returns a negative -> -1
*/

int _strcmp(char *str1, char *str2);

int main(void)
{
    char str_1[] = "Hello World";
    char str_2[] = "Hello";

    int value = _strcmp(str_1, str_2);

    if (value == 0)
    {
        printf("The strings are equal\n");
    }
    else
        printf("The strings are not equal\n");
}


int _strcmp(char *str1, char *str2){
int i, flag;
for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){
    if (str1[i] != str2[i])
    {
        flag = 1;
        break;
    }
}
if(flag == 1){
    return (1);
}
return (0);
}