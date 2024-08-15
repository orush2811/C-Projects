#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void generateOddEvenArray(int *sourceArr, int size)
{
    int i;
    int *oddArray;
    int *evenArray;
    int evenArrayIndex = 0, oddArayIndex = 0;
    int oddArraySize = 0, evenArraySize = 0;

    for (i = 0; i < size; i++)
    {
        if (sourceArr[i] % 2 == 0)
            evenArraySize++;
        else
            oddArraySize++;
    }

    oddArray = (int *)malloc(oddArraySize * sizeof(int));
    evenArray = (int *)malloc(evenArraySize * sizeof(int));

    for (i = 0; i < size; i++)
    {
        if (sourceArr[i] % 2 == 0)
        {
            evenArray[evenArrayIndex] = sourceArr[i];
            evenArrayIndex++;
        }
        else
        {
            oddArayIndex[oddArayIndex] = sourceArr[i];
            oddArayIndex++;
        }
    }
    printf("odd array values are: ");
    printArray(oddArray, oddArraySize);
    printf("even arrray values are: ");
    printArray(evenArray, evenArraySize);
}

int main()
{
    int originalArray[] = {12, 5, 7, 8, 3, 10, 4, 0};
    printf("The original array is: ");
    printArray(originalArray, 8);
    generateOddEvenArray(originalArray, 8);
}