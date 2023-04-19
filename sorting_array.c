#include <stdio.h>

/**
 * compare - used to compare which number is greater or less
 * @a: the first number
 * @b: the second number
 *
 * Return: returns 1 if first element has a higher rank , 0 if the elements are equal and -1
 * if the second element has higher rank
 */

int compare(int a, int b)
{
    if (a == b)
        return (0);
    else if (a > b)
        return (1);
    else
        return (-1);
}

/**
 * BubbleSort: used for sorting an array
 * @arr: the array being sorted
 * @n: the size of the array
 * @compare: pointer to a function
 *
 * Return: the function doent return anything
 */

void BubbleSort(int *arr, int n, int (*compare)(int, int))
{
    // simple bubble sort
    // Ascending order 1,2 3,
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]) > 0)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * sort: used for sorting an array
 * @arr: the array being sorted
 * @n: the size of the array
 *
 * Return: the function doent return anything
 */

void sort(int *arr, int n)
{
    // simple bubble sort
    // Ascending order 1,2 3,
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
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
    // sort(arr, size);
    BubbleSort(arr, size, compare);

    // printing the array
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return (0);
}