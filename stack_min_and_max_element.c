#include <stdio.h>
int stack[50];
int top = -1;
int size;

void push(int x){
    if (top == size - 1){
        printf("Overflow");
        return;
    }
    top++;
    stack[top] = x;
}

int pop(){
    int x;
    if (top == -1){
        printf("Underflow");
        return -1;
    }
    x = stack[top];
    top--;
    return x;
}

int max_elem(){
    int x;
    x = stack[top];
    for(int i = top;i>=0;i--){
        if(stack[i]>x){
            x = stack[i];
        }
    }
    return x;
}

int min_elem(){
    int x;
    x = stack[top];
    for(int i = top;i>=0;i--){
        if(stack[i]<x){
            x = stack[i];
        }
    }
    return x;
}

void display(){
    if (top == -1){
        printf("No element to display");
    }
    for(int i = top;i>=0;i--){
        printf("-----\n");
        printf("| %d |\n",stack[i]);
    }
    printf("-----\n\n");
}
int main()
{
    int x,y,z;
    printf("Enter the size of the stack\n");
    scanf("%d",&size);
    printf("Enter the elements to be pushed into the stack\n");
    for(int i=0;i<size;i++){
        scanf("%d",&x);
        push(x);
    }
    display();
    y = max_elem();
    printf("The largest element of the stack is %d\n",y);
    z = min_elem();
    printf("The smallest element of the stack is %d\n",z);
    return 0;
}
