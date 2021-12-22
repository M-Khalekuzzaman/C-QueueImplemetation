#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define CAPACITY 5

int ourQueue[CAPACITY];
int front = 0,rear = -1,totalItem = 0;

bool isFull()
{
    if(totalItem == CAPACITY)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if(totalItem == 0)
    {
        return true;
    }
    return false;
}
void enqueue(int item)
{
    if(isFull())
    {
        printf("Sorry !!!!!!! The queue is full\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    ourQueue[rear] = item;
    totalItem ++;
}
int dequeue()
{
    if(isEmpty())
    {
        printf("Sorry !!!!!!! The queue is full\n");
        return -1;
    }
    int frontItem = ourQueue[front];
    ourQueue[front] = -1;
    front = (front + 1) % CAPACITY;
    totalItem --;
    return frontItem ;
}
void printQueue()
{
    printf("Queue List : ");
    for(int i = 0 ; i<CAPACITY ; i++)
    {
        printf("%d ",ourQueue[i]);
    }
    printf("\n");
}
int main()
{
    printf("\n---------------- Let's implementation our Queue ------------------\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printQueue();
    enqueue(60);
    dequeue();
    printQueue();
    enqueue(60);
    printQueue();


    getch();
}
