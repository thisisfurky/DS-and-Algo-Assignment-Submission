#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(&arr[j],&arr[j-1]);
            j = j-1;
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}
int main()
{
    int arr[100],n;
    printf("Enter the no of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the array to be sorted\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
    printf("Sorted array is:\n");
    printArray(arr,n);
    return 0;
}
