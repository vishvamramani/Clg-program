#include <stdio.h>

int fab(int);
int main()
{
    int n, i, res;

    printf("Enter No Of Tams =");
    scanf("%d", &n);

    printf("\n Fibonacci ");

    for (i = 0; i < n; i++)
    {
        res = fab(i);
        printf(" \t %d ", res);
    }
}

int fab(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    else
    {
        return (fab(n - 1) + fab(n - 2));
    }
}