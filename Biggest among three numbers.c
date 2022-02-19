#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the values:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("\n%d is greatest",a);
    }
    else if(b>c)
    {
        printf("\n%d is greatest",b);
    }
    else
    {
        printf("\n%d is greatest",c);
    }
}