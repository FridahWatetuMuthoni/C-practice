#include <stdio.h>

int main(void)
{
    int num = 25985555;
    void *ptr = &num;

    printf("The value at ptr as an int is: %d\n", *((int *)ptr));
    printf("The value at ptr as a char is: %d\n", *((char *)ptr));
}