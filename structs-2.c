// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

typedef struct Point{
    int x;
    int y;
} point_t;

typedef struct City{
    char name[50];
    int population;
    point_t location;
} city_t;

void print_cities(city_t *city, char *str, int p,int x, int y){
    strcpy(city->name, str);
    city->population = p;
    city->location.x = x;
    city->location.y= y;
    
    printf("City name : %s\n", city->name);
    printf("City population : %d\n", 
    city->population);
    printf("location x : %d\n", city->location.x);
    printf("location y : %d\n", city->location.y);
}

int main() {
    // Write C code here
    city_t city;
    int p = 1000;
    int x = 30;
    int y = 50;
    char *str = "Hello World";
    print_cities(&city, str, p, x, y);
    return 0;
}