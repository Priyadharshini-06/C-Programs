#include<stdio.h>
void main()
{
    int a,b,c,choice;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square of a number\n");
    printf("Enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:c=a+b;
        printf("Addition of two numbers:%d\n",c);
        break;
        case 2:c=a-b;
        printf("\nSubtraction of two numbers:%d\n",c);
        break;
        case 3:c=a*b;
        printf("\nMultiplication of two numbers:%d\n",c);
        break;
        case 4:c=a/(float)b;
        printf("\nDivision of two numbers:%d\n",c);
        break;
        case 5:c=a*a;
        printf("\nSquare of a number:%d\n",c);
        break;
        default:printf("Enter the correct option");
        break;
    }
}   