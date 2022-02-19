#include<stdio.h>
void main()
{
    int a;
    float b,c;
    printf("Enter the number:\n");
    scanf("%d",&a);
    b=sqrt(a);
    c=cbrt(a);
    printf("Square root of the given number is %d",b);
    printf("Cube root of the given number is %d",c);
}