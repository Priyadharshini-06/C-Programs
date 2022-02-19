#include<stdio.h>
#define SIZE 6
void main()
{
    int A[SIZE];
    int W[SIZE];
    int i,k,prime,t;
    printf("Enter 6 numbers:");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<SIZE;i++)
{
    W[i]=0;
    for(k=1;k<A[i]/2;k++)
    {
        if(k*k*k==A[i])
        {
            W[i]=5;
            break;
        }
    }
    if(A[i]%4==0&&A[i]%6==0)
    {
        W[i]+=4;
    }
    prime=1;
    for(k=2;k<A[i];k++)
    {
        if(A[i]%k==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        W[i]+=3;
    }
    printf("<%d,%d>,",A[i],W[i]);
}
for(i=0;i<SIZE;i++)
{
    for(k=i+1;k<SIZE;k++)
    {
        if(W[i]>W[k])
        {
            t=A[i];A[i]=A[k];A[k]=t;
            t=W[i];W[i]=W[k];W[k]=t;
        }
    }
}
printf("\nAfter sorting based on weights\n");
for(i=0;i<SIZE;i++)
{
    printf("<%d,%d>,",A[i],W[i]);
}
printf("\n");
}