#include <stdio.h>

int gcd(int, int);
int main()
{
    int num1, num2, res;
    printf("\n Enter  Two Numbers \n ");

    printf("Enter First Number = ");
    scanf("%d", &num1);

    printf("Enter Second Number = ");
    scanf("%d", &num2);

    res = gcd(num1, num2);

    printf("\n Gcd Of %d And %d = %d ", num1, num2, res);
}

int gcd(int x, int y)
{
    int rem;
    rem = x % y;

    if (rem == 0)
    {
        return y;
    }

    else
    {
        return (gcd(y, rem));
    }
}