#include <stdio.h>

int main()
{
    int array[20];
    int n, i;
    int search;

    printf("Enter The Size Of Array =");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }

    printf("Enter The Search Element =  ");
    scanf("%d", &search);

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (array[mid] == search)
        {
            printf("array[%d]=%d", mid, search);
        }

        if (array[mid] < search)
        {

        }
    }
}