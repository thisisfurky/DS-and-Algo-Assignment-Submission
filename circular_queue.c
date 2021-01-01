#include <stdio.h>
int queue[50];
int front = -1;
int rear = -1;
int size;

void enqueue(int x){
    if ((front == 0) && (rear == size - 1) || (rear == front - 1)){
        printf("Overflow");
        return;
    }
    else if (rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}

int dequeue(){
    int x;
    if (front == -1){
        printf("Underflow");
        return -1;
    }
    if (front == rear){
        x = queue[front];
        front = rear = -1;
        return x;
    }
    else{
        x = queue[front];
        front++;
        return x;
    }
    
}

void display(){
    if (front == -1){
        printf("No element to display");
    }
    for(int i = front;i<=rear;i++){
        printf(" |%d| ",queue[i]);
    }
    printf("\n");
}
int main()
{
    int x,y,z;
    printf("Enter the size of the queue\n"); //Try with size as 5
    scanf("%d",&size);
    printf("Enter the elements to be enqueued into the queue\n");
    for(int i=0;i<size;i++){
        scanf("%d",&x);
        enqueue(x);
    }
    display();
    dequeue();
    dequeue();
    display();
    enqueue(10);
    enqueue(20);
    display();
    return 0;
}
