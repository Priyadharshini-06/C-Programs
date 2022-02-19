#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter the values:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
     {
       printf("\n Roots are real and equal");
       r1=r2=(-b)/(2*a);
       printf("\n The roots are:%f%f",r1,r2);
     }
    else if(d>0)
     {
       printf("\n Roots are real and unequal");
       r1=(-b+sqrt(d))/(2*a);
       r2=(-b-sqrt(d))/(2*a);
       printf("\n The roots are:%f%f",r1,r2);
      }
    else
       {
        printf("\n The root are imaginary");
    }
}