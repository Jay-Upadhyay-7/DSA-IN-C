#include <stdio.h>
#define MAX 100
void insert();
void delete();
void display();
int queue[MAX];
int rear =-1;
int front =-1;
int main()
{
    int choice=1;
    while (choice!=0)
    {
     printf("enter 1. to Insert element to queue,2 for Deletion,3 for Display all elements,0 for Quit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
              insert();
              break;
            case 2:
              delete();
              break;
            case 3:
              display();
              break;
            case 0: 
               break;
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
void insert()
{
    int item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
} 
void delete(){
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
