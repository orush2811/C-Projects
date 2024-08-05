#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void freeMemory(int *arr){
    free(arr);
}


int doubleArraySize(int **ptr,int size){
    int newSize=size*2;
    int *temp=(int*)realloc(*ptr,newSize*sizeof(int));
   if(temp==NULL){
    return -1;
   }
    *ptr=temp;
    for(int i=size;i<newSize;i++){
        (*ptr)[i]=0;
    }
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void initArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}

int createArray(int size)
{
    int *p;
    p = (int *)malloc(size * sizeof(int));
    if (p == NULL)
    {
        return NULL;
    }
    return *p;
}