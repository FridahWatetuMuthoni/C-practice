#include <stdio.h>

/*
doses[3] == *(doses + 3)  ==  *(3 + doses) == 3[doses]
*/

int main(void)
{
    int doses[] = {1, 3, 2, 1000};
    printf("Issue dose %i\n", 3 [doses]);
    printf("%li\n", doses);
    printf("%li\n", &(3 [doses]));
    printf("%li\n", (&(3 [doses]) - doses));
    return (0);
}