#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// An exercise that takes an array and creates a new one with no duplicated values

int *newArrayNoDuplicates(int *sourceArr, int size, int *newSize)
{
    int *newArray;
    int count = 1;
    int i, j = 0;
    for (i = 0; i < size - 1; i++)
    {
        if (sourceArr[i] != sourceArr[i + 1])
            count++;
    }
    newArray = (int *)malloc(count * sizeof(int));
    if (newArray == NULL)
    
        {
            *newSize = 0;
            return NULL;
        }

    *newSize = count;
    for (i = 0; i < size - 1; i++)
    {
        if (sourceArr[i] != sourceArr[i + 1])
        {
            newArray[j] = sourceArr[i];
            j++;
        }
        newArray[j] = sourceArr[i - 1];
    }

    return newArray;
}

void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int origArr[] = {1, 3, 3, 5, 6, 7, 7, 7, 8, 12, 12};
    int *anotherArr;
    int newSize;
    printf("Array before duplicates: \n");
    printArray(origArr, 11);
    anotherArr = newArrayNoDuplicates(origArr, 11, &newSize);
    printArray(anotherArr, newSize);
    return 0;
}