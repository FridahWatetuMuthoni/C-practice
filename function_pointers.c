#include <stdio.h>

/*
when we say that function pointers store the address of functions
it means that function pointers store the starting address or the entry
point of the block of memory containing all the instructions in a function
*/

void A()
{
    printf("Hello\n");
}

void B(void (*ptr)())
{
    ptr();
}

//
int main(void)
{
    //option one:
    void (*ptr)();
    ptr = A;
    B(ptr);
    //option two:
    B(A);
    return (0);
}