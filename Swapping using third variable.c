#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping:a=%d,b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping:a=%d,b=%d",a,b);
}