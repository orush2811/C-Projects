#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int initArray(int *arr, int size){

    
}

int createArray(int size){
    int *p;
    p=(int*)malloc(size*sizeof(int));
    if(p==NULL){
        return NULL;
    }
    return *p;
}