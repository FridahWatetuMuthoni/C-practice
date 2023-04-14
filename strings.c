#include <stdio.h>

//    String literals can never be updated:

int main(void)
{
    // A variable that points to a string literal can’t be used to change the contents of the string:
    char *cards = "JQK";

    // But if you create an array from a string literal, then you can  modify it:
    char cards[] = "JQK";

    return (0);
}