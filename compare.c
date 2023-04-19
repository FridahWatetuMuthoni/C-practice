#include <stdio.h>
#include <stdlib.h>

/*
Function returning pointer to int:
int *func (int a, int b);

Pointer to function returning int:
int (*func)(int a, int b);
*/

int compare(const void *a, const void *b){
    //type casting the void pointers to int
    //if a > b returns a positive
    //if a < b returns a negative
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int arr[] = {10, 5, 15, 12, 90, 80};
    int n = sizeof(arr)/sizeof(arr[0]), i;
    
    //we are passing compare function as an arguement in another function 
    //we are using the name alone since it pointers to where the function block starts
    qsort (arr, n, sizeof(int), compare);
    
    for (i=0; i<n; i++)
    printf ("%d ", arr[i]);
    return 0;
}