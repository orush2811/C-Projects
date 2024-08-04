#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create1DArrayByRef(int arrSize,int **p){
    int *newArr;
    int i;
    for(i=0;i<arrSize;i++){
        printf("Enter your value: ");
        scanf("%d",newArr[i]);
    }
    *p=newArr;
}


// Solution 2:

// void create1DArrayByRef(int arrSize,int **p){
//     int i;
//     *p=(int*)malloc(arrSize*sizeof(int));
//     for(i=0;i<arrSize;i++){
//         printf("Enter your value: ");
//         scanf("%d",&(*p)[i]);
//     }

// }
int main(){
    int size;
    int *ptr;
    printf("Enter the size of your array: ");
    scanf("%d",&size);
    create1DArrayByRef(size,&ptr);

    return 0;
}