#include <stdio.h>

// We use pointers so that functions can share memory
// The data created by one function can be modified by another function, so long as it knows where to find it in memory.
// The * operator can read the contents of a memory address.
// The * operator can also set the contents of a memory address.

void go_south_east(int *lat, int *lon);

int main(void)
{
    int latitude = 32;
    int longitude = -64;
    printf("latitude: %d, longitude: %d\n", latitude, longitude);
    go_south_east(&latitude, &longitude);
    printf("latitude: %d, longitude: %d\n", latitude, longitude);
    return (0);
}

void go_south_east(int *lat, int *lon)
{
    /*
    when you use * as an unary operator it gives you the value stored at a pointer
    but when its used on the left sid of an assignment its used to store a new value to the pointer
    */
    *lat = *lat - 1;
    *lon = *lon + 1;
}