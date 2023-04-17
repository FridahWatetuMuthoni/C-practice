#include <stdio.h>
#include <stdlib.h>

//to stop the process just after the prepossing pharse we use the -E flag : >> gcc -E -o d d.c
#define print printf("PRINT THIS!\n");

#define inc(x) x+1

#define area(base,height)  0.5 * base * height

#define min(x, y) ((x < y) ?  x : y)

#define output(s1) printf("%s\n", s1)

#define print_string(s1,s2) printf(#s1 " middle %s\n", s2);

//only uses int arrays
#define find_max(array, length) ({\
    int current = array[0]; \
    for (int i =1; i < length; i++) \
        if(array[i] > current) \
            current = array[i]; \
    current;\
})

//can use int, doubles or floats
#define find_maximum(array, length) ({\
    typeof(array[0]) current = array[0]; \
    for (int i =1; i < length; i++) \
        if(array[i] > current) \
            current = array[i]; \
    current;\
})

int main(void)
{
    //the printf("PRINT THIS!\n") is copied where print is placed by the preprocessor
    print

    int a = 2;
    a = inc(a);
    printf("a: %d\n", a); //returns 3

    int base1 = 20;
    int height1 = 20;
    int area1 = area(base1, height1);
    printf("Area: %d\n", area1);

    double base2 = 10.5;
    double height2 = 5.2;
    double area2 = area(base2, height2);
    printf("Area2: %lf\n", area2);

    int minimum_number = min(10, 90);
    printf("Min number: %d\n", minimum_number);
    
    int min_number = min(200,min(50, 90));
    printf("Min number: %d\n", min_number);

    output("ABC");

    char string[] = "test two";
    output(string);

    char str1[] = "Hello";
    char str2[]="World";
    print_string(str1, str2);

    int int_arr[] = {3,50,2,1,8,3,2};
    int size = sizeof(int_arr) / sizeof(int);
    int max_num = find_max(int_arr, size);
    printf("Maximum number: %d\n", max_num);

    double dble_arr[] = {3.5,50.9,2.5,1.6,8.8,3.5,2.0};
    int len = sizeof(dble_arr) / sizeof(double);
    double maximum_num = find_maximum(dble_arr, len);
    printf("Maximum number: %lf\n", maximum_num);
    
    
    return(0);
}