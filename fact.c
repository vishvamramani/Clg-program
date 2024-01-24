#include <stdio.h>

int fact();
int main()
{

    int n, value;

    printf("Enter the Number ");
    scanf("%d", &n);

    value = fact(n);

    printf("\n Factorial Of %d = %d  ", n, value);
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    else
    {
        return (n * fact(n - 1));
    }
}