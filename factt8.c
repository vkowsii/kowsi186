#include<stdio.h>
int main()
{
    int i,a[10];
    printf("enter the array value");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i])
    }
    for(i=0;i<=5;i++)
    {
        if(i%2==1)
        printf("%d",a[i]);
    }
    }
