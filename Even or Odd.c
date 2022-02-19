#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\nThe given number %d is even",a);
    }
    else
    {
        printf("\nThe given number %d is odd",a);
    }
}