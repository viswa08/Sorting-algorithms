#include <stdio.h>
#include <stdlib.h>

//fn prototype
void selectionSort(int *arr,int n);
void swap(int*,int*);
void printArray(int *arr,int n);

int main()
{
    int arr[]={43,1,65,12,7,12,10,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,len);
    printf("\n\n");
    selectionSort(arr,len);
    printArray(arr,len);

}

void selectionSort(int *arr,int n){
    //int min=arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(&arr[j],&arr[i]);
            }
        }
    }
}

void swap(int* a,int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

void printArray(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
