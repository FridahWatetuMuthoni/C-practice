#include <stdio.h>

void fun1() { 
    printf("Fun1\n"); 
}

void fun2() { 
    printf("Fun2\n"); 
}

void fun(int a)
{
    printf("Value of a is %d\n", a);
}

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
    fun();
}


int _strlen(char *str){
    int len, i;
    len = 0;
    for (i = 0; str[i]; i++)
        len++;
    return (len);
}

int main(void)
{
    int a = 10;
    int len;
    void (*ptr)(int) = &fun;
    ptr(a);

    char str[] = "Hello World";
    int (*len_ptr)(char*) = &_strlen;
    len = len_ptr(str);
    printf("The length of the str is %d\n", len);

    //they are like callback functions
        wrapper(fun1);
        wrapper(fun2);

    return (0);
}