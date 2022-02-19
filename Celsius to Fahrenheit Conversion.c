#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter the celsius value:\n");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("The Fahrenheit value of the given %f Celsius value is %f",c,f);
}