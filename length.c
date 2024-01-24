#include<stdio.h>
int main()
{
    char str[20];
    int i,len;

    printf("Enter The  String \n");
    scanf("%s",&str);

    for (i=0;str[i]!='\0';i++)
    {
        len++;
    }

    printf("length = %d",len);
}