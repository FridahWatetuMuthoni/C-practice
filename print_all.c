#include <stdio.h>
#include <stdarg.h>

//prototypes
void print_string(va_list arg);
void print_letter(va_list arg);
void print_integer(va_list arg);
void print_float(va_list arg);
void print_all(const char * const format, ...);

typedef struct print
{
    char *specifer;
    void(*print_func)(va_list arg);
}  print_t;

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    print_all("ceis", 'A', 10, "Hello World");
    return(0);
}

/**
 * print_all- the function prints anything that is passed to the function
 * @format:the chareters that contains specifers
 *
 * Return: the function does not return anything
 */
void print_all(const char * const format, ...)
{
    int i , j, len;
    char *separator = "";
    va_list args;
    va_start(args, format);

    print_t functions[] = {
        {"c", print_letter},
        {"s", print_string},
        {"i", print_integer},
        {"f", print_float}
    };

    len = sizeof(functions) / sizeof(print_t);

    i = 0;

    //checking if format is null or if the current charater is null
    while(format && (*(format + i)))
    {
        j = 0;

        while(j < len && (*(format + i) != *(functions[j].specifer)))
        {
            j++;
        }
        if(j < len)
        {
            printf("%s",separator);
            functions[j].print_func(args);
            separator = ", ";
        }
        i++;
    }

    printf("\n");
    va_end(args);
}


//functions for printing different datatypes
void print_string(va_list arg)
{
    char *str;
    str = va_arg(arg, char*);

    printf("%s", str);
}

void print_letter(va_list arg)
{
    char str;
    str = va_arg(arg, int);

    printf("%c", str);
}

void print_integer(va_list arg)
{
    int num;
    num = va_arg(arg, int);

    printf("%d", num);
}

void print_float(va_list arg)
{
    float num;
    num = va_arg(arg, double);

    printf("%f", num);
}
