#include<stdio.h>
void sortarray(int*,int*);
void main()
{
    int n,a[100],i;
    printf("\nEnter the number of elements in an array:");
    scanf("%d",&n);
    printf("\nEnter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sortarray(&a[0],&n);
    printf("\nAfter sorting....\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
 }
 void sortarray(int*p,int*num)
 {
     int i,j,temp;
     for(i=0;i<*num;i++)
    {
        for(j=i+1;j<*num;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}