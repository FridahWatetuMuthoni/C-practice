#include <stdio.h>
#include <stdlib.h>

//prototypes
int add(int , int);
int subtract(int, int);
int multiply(int, int);
int division(int, int);
int module(int,int);

//struct

/**
 * calculator: the struct creates the sign and the associated function
 * @sign the sign for calculation
 * @func: function pointer
 * Return: the function returns the result of the addition
*/
typedef struct calculator{
    char *sign;
    int (*func)(int, int);
} calc_t;

/**
 * main - the function gets commandline arguements and performs calculations on them
 * @argc: the number of commandline arguements
 * @argv: the array containing the arguements
 * 
 * Return: returns zero on success
*/

int main(int argc, char  *argv[]){
    int i, num1, num2, len, result;
    char *sign;

    calc_t functions[]={
        {"+", add},
        {"-", subtract},
        {"*", multiply},
        {"/", division},
        {"%", module}
    };

    if (argc != 4)
        return (0);

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    sign = argv[2];  //you have to pass the multiplication sign like this "*" for it to work

    len = sizeof(functions) / sizeof(calc_t);

    i  = 0;
    while (i < len)
    {
        if (*(sign) == *(functions[i].sign))
        {
            result = functions[i].func(num1, num2);
            printf("Result: %d\n", result);
        }
        i++;
    }
    return (0);
}


//functions performing the calculations

int add(int a, int b)
{
    return (a + b);
}

int subtract(int a, int b)
{
    return (a - b);
}


int multiply(int a, int b)
{
    return (a * b);
}

int division(int a, int b)
{
    return (a / b);
}

int module(int a,int b)
{
    return (a % b);
}
