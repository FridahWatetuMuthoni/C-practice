#include <stdio.h>

void add(int, int);
void subtract(int, int);
void multiply(int, int);

int main(void)
{
    // fun_ptr_arr is an array of function pointers
    void (*math_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int choice,  a = 15, b = 10;

    printf("Enter Choice: 0 for add, 1 for subtract and 2 for multiply:  ");
    scanf("%d", &choice);

    if (choice > 2)
        return (0);

    (*math_ptr_arr[choice])(a, b);

    return (0);
}


void add(int a , int b){
    int result = a + b;
    printf("Addition Result: %d\n", result);
}

void subtract(int a , int b){
    int result = a - b;
    printf("Subtraction Result: %d\n", result);
}

void multiply(int a , int b){
    int result = a * b;
    printf("Multiply Result: %d\n", result);
}