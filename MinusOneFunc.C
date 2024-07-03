#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int adjustableRealloc(int *arrSize,){
    int last_index=0,num=0,size=2;
    int *arr, *temp;

    printf("Enter the size of your array: ");
    scanf("%d",&num);

    if(num==-1){ 
    *arrSize=0;
    return NULL;

    }
    
    else
    temp=(int*)malloc(size*sizeof(int));
    if(!temp)return NULL; // if memory allocation failed
    arr=temp;
    while(num!=-1){
        if(last_index==size){
            size=size+1;
            temp=(int*)realloc(arr,size*sizeof(int));
            if(!temp) return NULL;
            arr=temp;
        }
        arr[last_index]=num;
        last_index++;
        printf("Enter numbers into the array: ");
        scanf("%d" ,&num);

    }
    *arrSize=last_index;
    return *arr;
}


int main(){

    return 0;
}