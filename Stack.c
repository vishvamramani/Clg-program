#include <stdio.h>
#define N 5
int stack[N], top = -1;
void push();
void pop();
void show();
void peek();
int main()
{
    int choice = 0;
    printf("*********Stack operations using array*********");
    printf("\n----------------------------------------------\n");
    while (choice != 5)
    {
        printf("\n Chose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.peek.\n5.Exit\n");
        printf("\n Enter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            peek();
            break;
        }
        case 5:
        {
            printf("Exiting....\n");
            break;
        }
        default:
        {
            printf("\nPlease Enter valid choice ");
        }
        };
    }
    return 0;
}
void push()
{
    int x;
    printf("Enter the value?\n");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("\n Overflow");
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}
void pop()
{
    int num;
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        num = stack[top];
        top = top - 1;
        printf("deleted number...%d\n", num);
    }
}
void show()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    if (top == -1)
    {
        printf("Stack is empty....\n");
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty....\n");
    }
    else
    {
        printf("Top most element is....%d\n", stack[top]);
    }
}