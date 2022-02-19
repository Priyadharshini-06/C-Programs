#include<stdio.h>
void main()
{
    int r;
    float area,circum;
    printf("Enter the value for r:\n");
    scanf("%d",&r);
   area=3.14*r*r;
   circum=2*3.14*r;
   printf("Area of the circle is %f \n",area);
   printf("Circumference of the circle is %f \n",circum);
}