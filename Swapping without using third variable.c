#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping:a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping:a=%d,b=%d",a,b);
}