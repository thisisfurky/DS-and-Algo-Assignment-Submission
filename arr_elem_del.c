#include <stdio.h>

int main()
{
    int arr[100],pos,n;
    printf("Enter the no of elements of array\n");
    scanf("%d",&n);
    printf("Enter %d no of elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of element you wish to delete\n");
    scanf("%d",&pos);
    pos--;
    if (pos>=n){
        printf("Deletion not possible\n");
    }
    else{
        for(i=pos;i<n-1;i++){
            arr[i] = arr[i+1];
        }
    }
    for(i=0;i<n-1;i++){
        printf("%d\n",arr[i]);
    }
}
