#include<stdio.h>
void main()
{
    int i,n,sum=0,count=0,height[100];
    float avg;
    printf("Enter the number of persons:");
    scanf("%d",&n);
    printf("\nEnter the height of each person in centimeter\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&height[i]);
        sum=sum+height[i];
    }
    avg=(float)sum/n;
    for(i=0;i<n;i++)
    {
        if(height[i]>avg)
        {
            count++;
        }
    }
printf("\nAverage height of %d persons is:%f\n",n,avg);
printf("\nThe number of persons above average:%d",count);
}