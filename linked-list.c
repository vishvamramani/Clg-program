#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *head = 0, *ptr, *temp;
void create();
void show();
int main()
{
    int choice = 0;
    while (choice != 3)
    {
        printf("\nChoose one option from the following list ...\n");
        printf("\n1.create \n2.display\n3.exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            show();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
    return 0;
}
void create()
{
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the first node : ");
    scanf("%d", &ptr->info);
    ptr->next = 0;
    if (head == 0)
    {
        head = temp = ptr;
    }
    else
    {
        temp->next = ptr;
        temp = ptr;
    }
}
void show()
{
    if (head == 0)
    {
        printf("list is empty....");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        temp = head;
        while (temp != 0)
        {
            printf("%d \n", temp->info);
            temp = temp->next;
        }
    }
}