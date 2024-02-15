#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int *p = &arr; // Correct way to assign the address of the first element of arr to p

    printf("%d", *p); // Correctly dereferences p to print the first element of arr
    return 0;
}
