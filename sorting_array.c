#include <stdio.h>

/**
 * sort: used for sorting an array
 * @arr: the array being sorted
 * @n: the size of the array
 * 
 * Return: the function doent return anything
*/

void sort(int *arr, int n){
    //simple bubble sort
    //Ascending order 1,2 3,
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            printf("i: %d, i: %d\n", i, j);
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int len, i;
    int arr[] = {3, 2, 1, 5, 6, 4};
    int size = sizeof(arr) / sizeof(int);
    sort(arr, size);

    //printing the array
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return (0);
}