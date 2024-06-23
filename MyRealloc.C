#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *myRealloc(void *srcblock, unsigned oldsize, unsigned newsize)
{
    // Method 2 - using memcpy
    int smallSize;
    void *newArr = malloc(newsize);
    if (!newArr)
        return NULL;
    if (oldsize < newsize)
        smallSize = oldsize;
    else
        smallSize = newsize;
    memcpy(newArr, srcblock, smallSize);
    // Method 1 without memcpy-
    // int smallSize=0;
    // if (oldsize < smallSize)
    //     smallSize = oldsize;
    // else
    //     smallSize = newsize;
    // char *resultArr = (char *)malloc(newsize);
    // if (!resultArr)
    //     return NULL; // if resultArr is NULL
    // for (int i = 0; i < oldsize; i++)
    // {
    //     resultArr[i]=((char*)srcblock)[i];
    // }
    // free(srcblock);
    // return resultArr;
}

int main()
{

    int *numbers = (int *)malloc(3 * sizeof(int));
    int *newNumbers = NULL;
    if (!numbers) // if numbers==NULL
        return 1;
    numbers[0] = 3;
    numbers[1] = 4;
    numbers[2] = 5;
    newNumbers = (int *)myRealloc(numbers, 3 * sizeof(int), 4 * sizeof(int));
    if (newNumbers)
        printf("The numbers are %d ", newNumbers);
    return 0;
}