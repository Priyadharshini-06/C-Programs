#include<stdio.h>
void main()
{
    int n,t,d,arms=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
        arms=arms+d*d*d;
        n=n/10;
    }
    if(arms==t)
    {
        printf("%d is an Armstrong number\n",t);
    }
    else
    {
        printf("%d is not an Armstrong number\n",t);
    }