#include<stdio.h>
void main()
{
    int a,b,sum,sub,mul,div,mod;
    printf("Enter the value of a,b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("Addition=%d",sum);
    printf("Subtraction=%d",sub);
    printf("Multiplication=%d",mul);
    printf("Division=%d",div);
    printf("Modulo=%d",mod);
}