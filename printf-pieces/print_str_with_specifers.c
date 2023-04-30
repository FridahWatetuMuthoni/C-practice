#include <stdio.h>
#include <stdarg.h>

typedef struct
{
    char *specifer;
    void (*func)(va_list arg);
} spec_t;

void print(char *str, ...)
{
    int i, j, spec_arr_len, num_args;
    va_list args;

    spec_t functions[] = {
        {'d', integer},
        {'c', charater},
        {'s', string},
        {'f', floating_point_number}};

    spec_arr_len = sizeof(functions) / sizeof(spec_t);
    num_args = 0;

    va_start(args, str);

    // getting the number of specifers
    while (*str)
    {
        if (*str == '%')
        {
            num_args++;
        }
        str++;
    }

    // looping thru the string and replacing the special charaters with values
    va_end(args);
}

int integer(va_list arg)
{
    int num;

    num = va_arg(arg);
    return (num);
}

int main(void)
{
    print("Tring to get %d this and %d this and %d this", 1, 2, 3);
    return (0);
}