/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int ternary_search(int arr[], int x,int beg, int end){
    int mid1,mid2;
    mid1 = beg + (end - beg)/3;
    mid2 = end - (end - beg)/3;
    if(arr[mid1] == x){
        return mid1;
    }
    else if(arr[mid2] == x){
        return mid2;
    }
    else if(arr[mid1] > x){
        return ternary_search(arr,x,beg,mid1-1);
    }
    else if(arr[mid2] < x){
        return ternary_search(arr,x,mid2+1,end);
    }
    else{
        return ternary_search(arr,x,mid1+1,mid2-1);
    }
    return -1;
}
int main()
{
    int arr[] = {2,5,6,8,13,15,18,24};
    int x,n,res;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the element to be searched\n");
    scanf("%d",&x);
    res = ternary_search(arr,x,0,n-1);
    (res == -1) ? printf("Element not present") : printf("Element is in %d index position",res);
    return 0;
}
