#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void insert();
void delete();
void display();
void peek();
int main()
{
    int choice;
    while (choice != 5)
    {
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue \n4.peek.\n5.Exit\n");
        printf("\nEnter your choice ?");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nEnter valid choice??\n");
        }
    }
    return 0;
}
void insert()
{
    int x;
    printf("\nEnter the element\n");
    scanf("\n %d", &x);
    if (rear == N - 1)
    {
        printf("Overflow...\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void delete()
{
    if (front == -1 && rear == -1)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d", queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        for (i = front; i < rear + 1; i++)
        {
            printf("%d \n", queue[i]);
        }
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("%d \n", queue[front]);
    }
}