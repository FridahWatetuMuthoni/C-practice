#include <stdio.h>

void print_number(int num)
{
    unsigned int number;

    if (num < 0)
    {
        number = -num;
        putchar('-');
    }
    else
    {
        number = num;
    }

    if (number / 10)
    {
        print_number(number / 10);
    }
    putchar('0' + (number % 10));
}

int main(void)
{
    int num = 1028;
    print_number(num);
    putchar('\n');
    return (0);
}