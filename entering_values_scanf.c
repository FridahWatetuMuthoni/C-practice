#include <stdio.h>

/*
%i: enter an integer
%29s: enter upto 29 charaters + '\0'
%f: floating point number
*/

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);

    char first_name[20];
    char last_name[20];
    printf("Enter first and last name: ");
    scanf("%19s %19s", first_name, last_name);
    printf("First: %s Last:%s\n", first_name, last_name);
    return (0);
}