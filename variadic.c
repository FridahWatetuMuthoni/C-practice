#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * variadic functions- are functions that accepts n number of arguements
 * The number of arguements is not fixed therfore the function can be called with any number of arguements
 * how to define variadic functions:
 *                 int func(int arg1, int arg2, ...);
 * (...)=> possible other arguements
 * Variadic functions must have at least one named parameter.
 * The additional arguements are accessed thru the va_list
 * va_start: start iterating arguements with a va_list
 * va_arg: retrieve an arguement
 * va-end: free a va_list
 * va_copy: copy contents of one va_list to another
 *
 * Accessing the arguments:
 * To access the unnamed arguments, one must declare a variable of type va_list in the variadic function.
 * The macro va_start is then called with two arguments: the first is the variable declared of the type va_list,
 *  the second is the name of the last named parameter of the function.
 * In C23 the second argument will be optional and will not be evaluated.
 * After this, each invocation of the va_arg macro yields the next argument.
 * The first argument to va_arg is the va_list and the second is the type of the next argument passed to the function.
 * Finally, the va_end macro must be called on the va_list before the function returns. (It is not required to read in all the arguments.)
 *
 * stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.
 * It provides facilities for stepping through a list of function arguments of unknown number and type.
 *
 * The contents of stdarg.h are typically used in variadic functions, though they may be used in other functions (for example, vprintf) called by variadic functions.
 */

int max(int num_args, ...);
void print(char *placeholders, ...);

int main(void)
{
    int max_num;
    max_num = max(6, 10, 1200, 14, 6, 487, 42);
    printf("%d\n", max_num);

    // printing according to imput
    print("dfddf", 10, 54.3, 12, 56, 4.1);
    return (0);
}

int max(int num_args, ...)
{
    int i, largest = 0;
    // To access the unnamed arguments, one must declare a variable of type va_list in the variadic function
    va_list args;
    // va_start is then called with two arguments : the first is the variable declared of the type va_list,
    // and the second arguement is the arguement passed right before this (...)
    va_start(args, num_args);

    for (i = 0; i < num_args; i++)
    {
        int x = va_arg(args, int);
        if (x > largest)
            largest = x;
    }

    va_end(args);
    return (largest);
}

void print(char *placeholders, ...)
{
    int str_len, i;

    va_list args;
    str_len = strlen(placeholders);

    va_start(args, placeholders);

    for (i = 0; i < str_len; i++)
    {
        if (placeholders[i] == 'd')
        {
            int num = va_arg(args, int);
            printf("%d\n ", num);
        }
        if (placeholders[i] == 'f')
        {
            double num = va_arg(args, double);
            printf("%lf\n ", num);
        }
    }

    va_end(args);
}